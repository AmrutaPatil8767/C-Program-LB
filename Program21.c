// Problem Statement : Accept two number form user and display samllest number

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : Maximum
//Description    : To display Paper Time
//Input          : Integer
//Output         : Integer
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 =0;
    auto int iValue2 =0;
    auto int iRet=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    iRet=Minimum(iValue1,iValue2);

    printf("%d is Samllest Number \n",iRet);

    return 0;
}
