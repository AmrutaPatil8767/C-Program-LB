 // To Print ASCII value of Charater in all way
#include<stdio.h>
#include<conio.h>

int main()
{
     char ch='\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    printf("ASCII values of the charater is : %d\n",ch);// decimal
    printf("ASCII values of the charater is : %o\n",ch);//ocatl
    printf("ASCII values of the charater is : %x\n",ch);//Hexademical

    return 0;
}