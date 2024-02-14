//Queue:
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Enqueue(PPNODE Head, int no)//InsertLast
{
    PNODE newn = NULL;
    PNODE Temp = *Head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
         Temp->next=newn;
    }
}
int Dequeue(PPNODE Head)//DeleteFirst
{
    int value =0;
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        printf("Queue is Empty..");
        return value;
    }
    else
    {
        value = (*Head)->data;
        *Head = (*Head)->next;
        free(Temp);
    }
    return value;

}void Display(PNODE Head)
{
    printf("Element of Queue are :\n");

    while(Head != NULL)
    {
        printf("|%d|\t",Head->data);
        Head= Head->next;
    }
    printf("\n");
}
int main()
{
    PNODE First = NULL;
    int iRet =0;

    Enqueue(&First,11);
    Enqueue(&First,21);
    Enqueue(&First,51);
    Enqueue(&First,101);
    Enqueue(&First,111);

    Display(First);

    iRet=Dequeue(&First);
    printf("Dequeue element is : %d\n",iRet);

    iRet=Dequeue(&First);
    printf("Dequeue element is : %d\n",iRet);

    iRet=Dequeue(&First);
    printf("Dequeue element is : %d\n",iRet);
    
    return 0;
}