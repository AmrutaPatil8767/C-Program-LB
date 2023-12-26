// Pattern Print in linear pattern(eg:-4 -3 -2 -1 0 1 2 3 4 ) Dyanmic Because value give by user
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(int iCnt=-iNo;iCnt<=iNo;iCnt++)
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