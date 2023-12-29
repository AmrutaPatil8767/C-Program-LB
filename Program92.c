//Write program to display non-liner pattern(eg:-   * * *
//                                                  * * *
//                                                  * * *  )Static Pattern .Its Nested loop and its timecomplexcitiy is O(N2)
#include<stdio.h>
#include<conio.h>
void Display()
{
    int i =0;
    int j=0;
    for(i=1;i<4;i++)
    {
        
        for(j=1;j<4;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    

}
int main()
{
    Display();
    return 0;
}