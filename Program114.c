// To Print  letter is captial letter or not by Charater.
#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

bool CheckCaptial(char cValue)
{
    if((cValue >= 'A')&& (cValue <='Z'))
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
        printf("Its a capital letter \n");
    }
    else
    {
        printf("Its a  not capital letter \n");
    }
    return 0;
}
