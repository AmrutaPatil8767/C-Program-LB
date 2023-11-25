//Accept Input form user and display  addition of factors (eg: factor of12= 1+2+3+4+6=16)
#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
{
    auto int iCnt=0;
    auto int iSum=0;

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    auto int iValue=0;
    auto int iRet =0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet=SumFactor(iValue);
    printf("Sum Factor are : %d \n",iRet);

    return 0;
}