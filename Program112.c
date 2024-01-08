 // To Print all Table
#include<stdio.h>
#include<conio.h>

int main()
{
    int iCnt =0;

    printf("------------------------------------------------------");
    printf("--------------------ASCII Table-----------------------");
    printf("------------------------------------------------------");

    for(iCnt=0;iCnt<=127;iCnt++)
    {
        printf("%c\t%d\t%o\t%x\t\n",iCnt,iCnt,iCnt);
    }


    printf("---------------------------------------------------- \n");
    return 0;
}