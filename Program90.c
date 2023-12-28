// Pattern Print in linear pattern(eg:a b c d) Dyanmic Because value give by user
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt=0;
    char ch ='\0';//Default value of any charater is zero
    for(int iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)// wecan also intilized the ch here also
    {
        printf("%c\t",ch);
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