// Problem Statement : Accept radius form user and calculate the area of circle.
//Step 1: Understand theproblem statement 
//Conclusion: we are going to use formula as PI*r*r
//Step 2: Algorithm
/* START
   Accept radius from user and store into radius
   Create a variable as PI  and store value 3.14
   calculate area PI*R*R
   Display the value of area of circle
   STOP

*/
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : CalculateArea
//Description    : It is calculate area of circle
//Input          : Float
//Output         : Float
//Auther Name    : Amruta Mahesh Patil
// Date          : 02/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PI 3.14 // User define micro
float CalculateArea(float fValue)
{
    auto float fAns = 0;

    fAns= PI*fValue*fValue;
    return fAns;
}
//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto float fradius = 0.0f;
    auto float farea =0.0f;

    printf("Enter a radius of circle:\n");
    scanf("%f",&fradius);

    farea=CalculateArea(fradius);

    printf("Area of circle:%f",farea);
    return 0;
}
