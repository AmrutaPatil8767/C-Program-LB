//Program Statement: Accept two number form user and perform addition
//Step-1 To understand
//Setp-2 Start
//Step-3 Select language
//Step-4 Write Code


#include<stdio.h>

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iAns=0;


    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;

    printf("Addition of number: %d\n",iAns);

    return 0;


}
//Step-5 Test Code
//Test Case:1
// Input 10 11
//Output 21

//Test Case:2
// Input 10 10
//Output 10

//Test Case:3
// Input 12 -6
//Output 6

//Test Case:4
// Input -6 -5
//Output 11

