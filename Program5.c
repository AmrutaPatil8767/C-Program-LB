//Program Statement: Accept two number form user and perform addition
//Step-1 To understand
//Setp-2 Start
//Step-3 Select language
//Step-4 Write Code


#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iSum=0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iAns=0;


    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    iAns= Addition(iValue1,iValue2);  // Call to function

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

