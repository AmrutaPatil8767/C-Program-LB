// Problem Statement : Accept three number form user and display samllest number

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : Minimum
//Description    : To display Minimum
//Input          : Integer
//Output         : Integer
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 <= iNo2) && (iNo1 <= iNo3))
    {
        return iNo1;
    }
    else if((iNo2 <= iNo1) && (iNo2 <= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
    
}

//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 =0;
    auto int iValue2 =0;
    auto int iValue3 =0;
    auto int iRet=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);


    iRet=Minimum(iValue1,iValue2,iValue3);

    printf("%d is Smallest Number \n",iRet);

    return 0;
}
