// Problem Statement : Accept two values form user and to calculate the percantage

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : CalculatePercantage
//Description    : To display Percentage
//Input          : Float
//Output         : Float
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CalculatePercantage(int iMarks, int iTotal)
{
    auto float fpercantage = 0.0f;
   
    
    fpercantage = (((float)iMarks/(float)iTotal)*100);
    return fpercantage;
}
//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iValue1 =0;
    auto int iValue2=0;
    auto float fRet = 0.0f;

    printf("Enter a Marks:\n");
    scanf("%d",&iValue1);

    printf("Enter a Total Marks:\n");
    scanf("%d",&iValue2);

    fRet = CalculatePercantage(iValue1,iValue2);
    printf("Your Percentage is : %f\n",fRet);

    return 0;
}
