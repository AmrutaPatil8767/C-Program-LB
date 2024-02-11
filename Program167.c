//Stack:
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Push(PPNODE Head, int no)//InsertFirst
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
int pop(PPNODE Head)//DeleteFirst
{
    int value =0;
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        printf("Stack is Empty..");
        return value;
    }
    else
    {
        value = (*Head)->data;
        *Head = (*Head)->next;
        free(Temp);
    }
    return value;
}
void Display(PNODE Head)
{
    printf("Element of stack are :\n");

    while(Head != NULL)
    {
        printf("|%d|\n",Head->data);
        Head= Head->next;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);

    Display(First);

    iRet=pop(&First);
    printf("poped element is : %d\n",iRet);

    iRet=pop(&First);
    printf("poped element is : %d\n",iRet);

    iRet=pop(&First);
    printf("poped element is : %d\n",iRet);
    
    return 0;
}