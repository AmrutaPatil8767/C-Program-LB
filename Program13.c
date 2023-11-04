// Problem Statement : Accept number form user and calculate its even or odd.
//Step 1: Understand the problem statement 
//Step 2: Algorithm
/* START
   Accept number from user 
   Divide the number by two
   Its remaindar is 0 than display even other wise odd
   STOP

*/
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : CheckEven
//Description    : To display even or odd number
//Input          : Integer
//Output         : Integer
//Auther Name    : Amruta Mahesh Patil
// Date          : 02/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue =0;
    bool bRet = false; // False =0 and True = 1

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is even number \n",iValue);
    }
    else
    {
    printf("%d is odd number\n",iValue);
    }
    return 0;
}
