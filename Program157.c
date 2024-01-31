//Singly Linear Linked List
#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;  
    struct node *next; 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    //step1:Allocated memory for node 
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));//for node loacted the memory by mallloc
    //step2: Initialise the node

    newn->data = No;
    newn->next = NULL;

    //Step3: Check whether linked is empty or not
    if(* Head == NULL)//Linked list is empty
    {
        * Head = newn;
    }
    else//Linked List contains at least 1 node in it
    {
        newn-> next = * Head;
        * Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Element of Linked List are :\n");

    while(Head != NULL)
    {
        printf("\%d ->",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
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

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,101);
    

    Display(First);//Display(100)
    iRet = Count(First);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}