//Singly circular Linear Linked List:

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;  // its not a object its new name 

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;
       // (*Tail)->next = *Head;
    }
    else //LL contains at least one node
    {
        newn->next=*Head;
        *Head=newn;  //#
       // (*Tail)->next=*Head;
    }
    (*Tail)->next=*Head;//#
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;
        (*Tail)->next = *Head;//#
    }
    else //LL contains at least one node
    {
        (*Tail)->next=newn;
        *Tail=newn;
        (*Tail)->next=*Head;//#
    }
    
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
 if((*Head == NULL) && (*Tail== NULL))// Case 1
 {
    return;
 }
 else if(*Head == *Tail)//Case 2
 {
    free(*Head);
    *Head=NULL;
    *Tail=NULL;
 }
 else// Case 3
 {
    (*Head)= (*Head)->next;
    free((*Tail)->next);
    (*Tail)->next=*Head;
 }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE Temp = *Head;
    if((*Head == NULL) && (*Tail== NULL))// Case 1
 {
    return;
 }
 else if(*Head == *Tail)//Case 2
 {
    free(*Head);
    *Head=NULL;
    *Tail=NULL;
 }
 else// Case 3
 {
    while(Temp->next!=*Tail)
    {
        Temp = Temp->next;
    }
    free(*Tail);
    *Tail=Temp;
    (*Tail)->next = *Head;
 }
}
void Display(PNODE Head, PNODE Tail)
{
    if((Head != NULL)&&(Tail != NULL))
    {
        do 
        {
            printf("| %d |->",Head->data);
            Head=Head->next;
        }while(Head != Tail->next);

    printf("Adrress of First node\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt=0;
    if((Head != NULL)&&(Tail != NULL))
    {
        do 
        {
            iCnt++;
            Head=Head->next;
        }while(Head != Tail->next);
    }
    return iCnt;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{
    int isize =0;
    int i=0;
    isize = Count(*Head,*Tail);
    PNODE newn = NULL;

    PNODE Temp = *Head;
    if((ipos < 1) ||(ipos >isize+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if (ipos == 1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(ipos == isize+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for(i=1; i<ipos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next=Temp->next;
        Temp->next=newn;

    }

}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
    int isize =0;
    int i=0;
    isize = Count(*Head,*Tail);

    PNODE Temp = *Head;
    PNODE targetednode =NULL;
    if((ipos < 1) ||(ipos >isize))
    {
        printf("Invalid Position \n");
        return;
    }
    if (ipos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(ipos == isize+1)
    {
        DeleteLast(Head,Tail);
    }
    else
    {

        for(i=1; i<ipos-1;i++)
        {
            Temp = Temp -> next;
        }
        targetednode = Temp->next;
        Temp->next=Temp->next->next;
        free(targetednode);
    }

}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;   //#
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

    InsertAtPos(&First,&Last,105,5);
    Display(First,Last);
    iRet=Count(First,Last);
    printf("Number of Nodes are: %d \n",iRet);

    DeleteAtPos(&First,&Last,5);
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

    return 0;
}