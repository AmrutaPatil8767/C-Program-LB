//Display the digit

#include<stdio.h>
#include<stdbool.h>

void  Display(int iNo)
{
    auto int iDigit=0;
    printf("Value of No is: %d \n",iNo);

    iDigit=iNo%10;
    printf("Digit is : %d \n",iDigit); //1
    iNo = iNo/10; //72
    printf("Value of No is : %d \n",iNo); //72

    iDigit=iNo%10;
    printf("Digit is: %d \n",iDigit);//2
    iNo = iNo/10; //7
    printf("Value of No is : %d \n",iNo);//7

    iDigit=iNo%10;
    printf("Digit is : %d \n",iDigit); //7
    iNo = iNo/10; //0
    printf("Value of No is : %d \n",iNo); //0

}
int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}