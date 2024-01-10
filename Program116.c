// take form user any letter and return its small letter.
#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

char CovertSmall(char cValue)
{
        return cValue + 32;

}

int main()
{
     char ch='\0';
     char cRet = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    cRet= CovertSmall(ch);

    printf("Converted Letter in small letter is : %c \n",cRet);

    return 0;
}
