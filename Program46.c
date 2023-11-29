//Accept Input form user and check wheather Prime number or not (7,11,23)
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    auto int iCnt=0;

    if(iNo <0)  // Updater
    {
        iNo=-iNo;
    }

    for(iCnt =2; iCnt <= (iNo/2); iCnt++)// iCnt =2 because 1 has all prime number
    {
        if((iNo % iCnt) == 0)
        {
         return false;
        }
    }
    return true;
 }

int main()
{
    auto int iValue=0;
    auto bool bRet =false;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is Prime Number",iValue);
    }
    else
    {
        printf("%d is Not Prime Number",iValue);
    }

    return 0;
}