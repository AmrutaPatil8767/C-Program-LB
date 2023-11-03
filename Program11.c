// Problem Statement : Accept number form user and calculate its cube.
//Step 1: Understand the problem statement 
//Conclusion: we are going to use formula as cube = ino*ino*ino
//Step 2: Algorithm
/* START
   Accept number from user and store into ino
   Create a variable  and store value og cube
   calculate cube = iNo*iNo*iNo
   Display the value of Cube
   STOP

*/
#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : CalculateCube
//Description    : It is used to  calculate Cube
//Input          : Integer
//Output         : Integer
//Auther Name    : Amruta Mahesh Patil
// Date          : 02/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CalculateCube(int iValue)
{
    int iCube =0;

    iCube = iValue * iValue *iValue;
    return iCube;
}
//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    auto int iNo =0;
    auto int iAns =0;

    printf("Enter a number:\n");
    scanf("%d",&iNo);

    iAns=CalculateCube(iNo);

    printf("Cube is :%d",iAns);
    return 0;
}
