// Problem Statement : Accept Percantage form user and to Display there grade

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Name  : DisplayClass
//Description    : To display Class
//Input          : Float
//Output         : Float
//Auther Name    : Amruta Mahesh Patil
// Date          : 03/10/2023
////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayClass(float fMarks)
{
    if((fMarks <0.00) ||(fMarks > 100.00))  // filter
    {
        printf("Invalid Marks ...\n");
    }
     if((fMarks >=0.00) &&(fMarks < 35.00))  
    {
        printf("Your are Fail ...\n");
    }
     else if((fMarks >= 35.00) &&(fMarks < 50.00))  
    {
        printf("Your are Pass ...\n");
    }
    else if((fMarks >= 50.00) &&(fMarks < 60.00)) 
    {
        printf("Your class is second class ...\n");
    }
     else if((fMarks>=60.00) &&(fMarks < 75.00)) 
    {
        printf("Your class is First Class ...n");
    }
    else if ((fMarks >=75.00) &&(fMarks <=100.00))
    {
        printf("Your class is first with Distinction \n");
    }
}

//////////////////////////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0f;

    printf("Enter Your Percantage:\n");
    scanf("%f",&fValue);

   DisplayClass(fValue);
    return 0;
}
