//Singly Linear Linked List
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head== NULL)
    {
        *Head= newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;//Temp pointer for LL Traversal
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head== NULL)//LL is empty
    {
        *Head= newn;
    }
    else//Travel the LL till last node
    {
        while(Temp->next != NULL)
        {
            Temp=Temp->next;
        }
        //Add the address of new node at the end of last node
        Temp->next=newn;
    }

}
void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("|%d| ->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");

}
int Count(PNODE Head)
{
    int iCnt =0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        *Head =(*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
   if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        PNODE Temp = *Head;
        while(Temp->next-> next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp->next); 
        Temp->next = NULL;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet =0;

    InsertFirst(&First,111);
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet=Count(First);

    printf("Number of Nodes are: %d \n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet=Count(First);

    printf("Number of Nodes are: %d \n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d \n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d \n",iRet);


    return 0;
}