//Dynamic
#include<stdio.h>

void display(int iNo)
{
    int iCnt =0; // Counter = iCnt
    
    for(iCnt =0;iCnt <=iNo;iCnt ++) 
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int iValue=0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    display(iValue);
 
    return 0;
}
