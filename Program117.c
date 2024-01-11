// take form user any letter and return its captial letter.
#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

char CovertCaptial(char cValue)
{
        return cValue - 32;

}

int main()
{
     char ch='\0';
     char cRet = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    cRet= CovertCaptial(ch);

    printf("Converted Letter in Captial letter is : %c \n",cRet);

    return 0;
}
