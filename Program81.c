// Pattern Print in linear pattern(eg:* * * * * *)Static Because value not give by user
#include<stdio.h>
#include<conio.h>
void Display()
{
    int iCnt=0;
    for(int iCnt=1;iCnt<=6;iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

}
int main()
{
    Display();
    return 0;
}