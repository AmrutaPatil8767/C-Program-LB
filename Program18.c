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
  switch(istandarad)
  {
    case 1:
        printf("Your Exam is at 8AM \n");
        break;
    
    case 2:
        printf("Your Exam is at 9AM \n");
        break;

    case 3:
        printf("Your Exam is at 10AM \n");
        break;

    case 4:
        printf("Your Exam is at 11AM \n");
        break;

    case 5:
        printf("Your Exam is at 12NOON \n");
        break;

    default:
        printf("Wrong Input \n"); // Do not use break in Default because it direct break 

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
