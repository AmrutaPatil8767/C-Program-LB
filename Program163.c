//Doubly Linear Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node *next;
    struct node *prev;  //#
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    

    newn =(PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL)//LL is Empty
    {
        *Head = newn;
    }
    else
    {
        newn->next=*Head;
        (*Head)->prev = newn; //#
        *Head=newn;
    }

}
void InsertLast(PPNODE Head, int no)
{
     PNODE newn = NULL;
     PNODE Temp = *Head;
     
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL)//LL is Empty
    {
        *Head = newn;
    }
    else
    {
        //type 2
        while(Temp->next!= NULL)
        {
            Temp=Temp->next;
        }
        Temp->next = newn;
        newn->prev = Temp;
    }

}

void DeleteFirst(PPNODE Head)
{
    if(*Head==NULL)//Empty LL
    {
        return;
    }
    else if(((*Head)->next==NULL) && ((*Head)->prev ==NULL)) //#  - Singly LL
    {
        free(*Head);
        *Head = NULL;
    }
    else//Multi-LL
    {
        *Head=(*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }

}
void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
     if(*Head==NULL)//Empty LL
    {
        return;
    }
    else if(((*Head)->next==NULL) && ((*Head)->prev ==NULL)) //#  - Singly LL
    {
        free(*Head);
        *Head = NULL;
    }
    else//Multi-LL
    {
        while(Temp->next->next !=NULL)
        {
            Temp=Temp->next;
        }
         free(Temp->next);
         Temp->next = NULL;
    }

}
void Display(PNODE Head)
{
    printf("Content of LinkedList are:\n");
    printf("NULL <=>");
    while(Head != NULL)
    {
        printf("|%d|<=>",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt =0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}
void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int Size=0;
    int i =0;
    Size = Count(*Head);
    PNODE newn = NULL;
    PNODE Temp=*Head;

    if((iPos <1)||(iPos >(Size+1)))
    {
        printf("Invalid Postition \n");
        return;
    }
    if(iPos == 1)
    {
          InsertFirst(Head,no);
    }
    else if(iPos == Size+1)
    {
        InsertLast(Head,no);  
    }
    else
    {
      newn = (PNODE)malloc(sizeof(NODE));
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;   // #
     

    for(i =1; i<iPos-1;i++)
    {
        Temp=Temp->next;
    }
    newn->next = Temp->next;
    Temp->next->prev=newn;
    Temp->next = newn;
    newn->prev = Temp;
    }
}
void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size=0;
    Size = Count(*Head);
    int i=0;
    PNODE Temp = *Head;

    if((iPos <1)||(iPos >(Size)))
    {
        printf("Invalid Postition \n");
        return;
    }
    if(iPos == 1)
    {
          DeleteFirst(Head);
    }
    else if(iPos == Size)
    {
        DeleteLast(Head);  
    }
    else
    {
        for(i=1; i< iPos-1;i++)
        {
            Temp=Temp->next;
        }
         Temp->next = Temp->next->next;
         free(Temp->next->prev);  //#
         Temp->next->prev=Temp;  //#

    }
}

int main()
{
    PNODE First = NULL;
    int iRet =0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);

    InsertAtPos(&First,105,5);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);

    DeleteAtPos(&First,5);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);


    DeleteFirst(&First);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet =Count(First);
    printf("Number of Element are :%d \n",iRet);
    
    return 0;
}