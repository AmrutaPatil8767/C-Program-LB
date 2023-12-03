// Program to display digit
#include<stdio.h>
void Display(int iNo)
{
    int iDigit =0;

    //jo paryanta iNo 0 motha ahe to paryanta fira
    while (iNo >0)
    {
        printf("---------------------------------------------------------\n");
        iDigit = iNo %10;
        printf("Digit is : %d \n",iDigit);
        iNo = iNo/10;
        printf("Number is : %d \n",iNo);
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}