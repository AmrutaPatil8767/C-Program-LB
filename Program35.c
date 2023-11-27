//Display Number on Screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<= iNo;iCnt++)
    {
        printf("Hello %d\n",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number to print Hello \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}