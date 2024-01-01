//Write program to display non-liner pattern(eg:-   * * * * 
//                                                  # # # #
//                                                  * * * *
//                                                  # # # #  )Dynamic Pattern.Its Nested loop and its timecomplexcitiy is O(N2)
#include<stdio.h>
#include<conio.h>
void Display(int iRow, int iCol)
{
    int i =0;
    int j=0;
    for(i=1;i<= iRow;i++)//outer loop
    {
        
        for(j=1;j<=iCol;j++)// inner loop
        {
            if(i%2==0)
            {
                printf("#\t",i);
            }
            else
            {
                printf("*\t",j);
            }
        }
        printf("\n");
    }
    

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter a rows Count:\n");
    scanf("%d",&iValue1);
    printf("Enter a Columns Count:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}