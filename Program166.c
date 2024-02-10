//Doubly Circular Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*Head == NULL)&&(*Tail == NULL))//LL is Empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
         newn->next=*Head;
         (*Head)->prev=newn;
         *Head=newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;

}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((*Head == NULL)&&(*Tail == NULL))//LL is Empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
       newn->prev=(*Tail);
       (*Tail)->next=newn;
       *Tail=newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))// LL is empty
    {
        return;
    }
    else if(*Head== *Tail)// LL is contains single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // LL  contain more than one node
    {
        *Head=(*Head)->next;
        free((*Tail)->next); //free((*Head)->prev);
        (*Head)->prev=*Tail;
        (*Tail)->next=*Head;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
     if((*Head == NULL) && (*Tail == NULL))// LL is empty
    {
        return;
    }
    else if(*Head== *Tail)// LL is contains single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // LL  contain more than one node
    {
        *Tail=(*Tail)->prev;
        free((*Tail)->next);
        (*Head)->prev=*Tail;
        (*Tail)->next=*Head;
    }
}
void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do{
            printf("|%d|<=>",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
    }
    printf("Adrress of First node\n");

}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt =0;
    if(Head != NULL && Tail != NULL)
    {
        do{
            iCnt++;
            Head = Head->next;
        }while(Head != Tail->next);
    }
    return iCnt;
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int ipos)
{
    int iSize=0;
    int i=0;
    PNODE newn = NULL;
    PNODE Temp = *Head;

    iSize = Count(*Head,*Tail);
    if((ipos < 1)||(ipos < iSize+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(ipos == iSize+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i=1;i < ipos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next->prev= newn;
        Temp->next=newn;
        newn->prev=Temp;
    }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
    int iSize=0;
    int i=0;
    PNODE Temp = *Head;

    iSize = Count(*Head,*Tail);
    if((ipos < 1)||(ipos < iSize))
    {
        printf("Invalid Position \n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(ipos == iSize)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(i=1;i < ipos-1;i++)
        {
            Temp = Temp->next;
        }
        Temp->next=Temp->next->next;
        free(Temp->next->prev);
        Temp->next->prev=Temp;
    }
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet =0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    InsertAtPos(&First,&Last,105,450);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    DeleteAtPos(&First,&Last,450);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);


    return 0;
}