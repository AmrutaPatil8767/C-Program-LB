//Accept Input form user and check wheather perfect number or not (6,28,496)
#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iNo)
{
    auto int iCnt=0;
    auto int iSum=0;

    if(iNo <0)  // Updater
    {
        iNo=-iNo
    }

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum+iCnt;
        }
    }
    if(iSum == iNo)
    {
                   return true;
    }
     else
     {
         return false;
    }
    }

int main()
{
    auto int iValue=0;
    auto bool bRet =false;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    bRet=CheckNumber(iValue);
    if(bRet == true)
    {
        printf("%d is Perfect Number",iValue);
    }
    else
    {
        printf("%d is Not Perfect Number",iValue);
    }

    return 0;
}