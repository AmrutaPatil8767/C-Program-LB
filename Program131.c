// Display String by a Updated String.
#include<stdio.h>
#include<conio.h>

void Replace(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if(*Str == 'a')
        {
            *Str = '_';
        }
         Str++; // Str++ means increse the address and *Str++ means it will increse a by one (eg: a by b)
     }
}

int main()
{
    char Arr[20];
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);

    printf("Updated String is : %s\n",Arr);

    return 0;
}
