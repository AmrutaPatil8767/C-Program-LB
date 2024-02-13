//Singly Linear Linked List
#include<iostream>
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
        cout<<"Inside Constructor \n";
        First = NULL;
        Count =0;
      }
      void InsertFirst(int no)
      {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(First== NULL) //if(Count == NULL)
        {
            First = newn;
        }
        else
        {
            newn->next = First;
            First= newn;
        }
        Count++;

      }
      void InsertLast(int no)
      {

      }
      void Display()
      {
        PNODE Temp = First;

     while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp= Temp->next;
    }
    cout<<"NULL \n";
}

};
int main()
{
    SinglyLL obj;  //object

    obj.InsertFirst(111);
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of element in the linked list are:"<<obj.Count<<"\n";

    return 0;
}