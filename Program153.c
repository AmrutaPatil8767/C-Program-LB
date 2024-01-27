// Linear Linked List
#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;  //4 bytes
    struct node *next;  //8 bytes - self referececial structure
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    struct node *First = NULL; // pointer 8 bytes



    return 0;
}