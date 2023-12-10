//Accpet number form user and checkwheather its palindrome or not.
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iCopy=iNo; // Xerox kadhali
    int iDigit=0;
    int iRev=0;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iRev=(iRev*10)+iDigit;
    }
    if(iRev==iCopy)
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
    int iValue=0;
    bool bRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);

    if(bRet== true)
    {
        printf("%d is a Palindrome Number",iValue);
    }
    else
    {
        printf("%d is not a Palindrome Number",iValue);
    }
    return 0;
 }