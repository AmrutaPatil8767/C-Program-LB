// Problem Statement : Accept three number form user and display its average

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : Average
//Description    : To display Average
//Input          : Integer
//Output         : Integer
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Average(int iNo1, int iNo2, int iNo3)
{
    float iaverage = 0.0f;

    iaverage=((iNo1+iNo2+iNo3)/3);

    return iaverage;
}

//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 =0;
    auto int iValue2 =0;
    auto int iValue3 =0;
    auto float iRet=0;

    printf("Enter First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);

    printf("Enter Third Number:\n");
    scanf("%d",&iValue3);


    iRet=Average(iValue1,iValue2,iValue3);

    printf(" Average is : %f \n",iRet);

    return 0;
}
