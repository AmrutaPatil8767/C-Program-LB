//Display Number in Resverse on Screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo; iCnt>= 1;iCnt--)
    {
        printf(" %d\n",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number to print Number \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}