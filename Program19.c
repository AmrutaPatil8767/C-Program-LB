// Problem Statement : Display Paper time to the class

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : DisplayExamTime
//Description    : To display Paper Time
//Input          : -
//Output         : -
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayExamTime(int istandarad)
{
  if (istandarad == 1)
  {
     printf("Your Exam is at 8AM \n");
  }

  else if(istandarad == 2)
  {
    printf("Your Exam is at 9AM \n");
  }

 else if(istandarad == 3)
 {
    printf("Your Exam is at 10AM \n");
 }

 else if(istandarad == 4)
{
    printf("Your Exam is at 11AM \n");
}

  else if(istandarad == 5)
{
    printf("Your Exam is at 12NOON \n");
}

 else
{        
    printf("Wrong Input \n"); 

}   
}

//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue =0;

    printf("Enter Your Class:\n");
    scanf("%d",&iValue);

   DisplayExamTime(iValue);
    return 0;
}
