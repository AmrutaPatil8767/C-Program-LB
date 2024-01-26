// Display String by a Updated String.
#include<stdio.h>
#include<conio.h>

void strtogglerX(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if((*Str >= 'a')&& (*Str <='z'))
        {
            *Str =*Str - 32;
        }
        else if((*Str >= 'A')&& (*Str <='Z'))
        {
            *Str =*Str +32;
        }
         Str++;
     }
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strtogglerX(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}
