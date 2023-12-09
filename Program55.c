//Accpet number form user and display it in reverse from.
#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    return iRev;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);

    printf("Reverse Number is:%d ",iRet);

    return 0;

}