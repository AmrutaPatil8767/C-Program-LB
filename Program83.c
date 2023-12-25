// Pattern Print in linear pattern(eg:1 2 3 4 5 6) Dyanmic Because value give by user
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue=0;
    printf("Enter the Count :\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}