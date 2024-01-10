// To Print  letter is small letter or not by letter.
#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool CheckCaptial(char cValue)
{
    if((cValue >= 'a')&& (cValue <='z'))
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
     char ch='\0';
     bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet= CheckCaptial(ch);

    if(bRet== true)
    {
        printf("Its a small letter \n");
    }
    else
    {
        printf("Its a  not small letter \n");
    }
    return 0;
}
