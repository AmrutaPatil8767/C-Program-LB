//Singly Linear Linked List
#include<iostream.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL // class
{
    public:
      PNODE First;
      int Count;

      SinglyLL() // Constructor
      {
        First = NULL;
        Count =0;
      }
      void InsertFirst(int no);
      void InsertLast(int no);
      void InsertAtPos(int no,int iPos);
      void DeleteFirst(int no);
      void DeleteLast(int no);
      void DeleteAtPos(int no,int iPos);
      void Display();

};
int main()
{
    SinglyLL obj();  //object

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    return 0;
}