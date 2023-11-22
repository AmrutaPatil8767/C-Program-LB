//Accept number form user and display its factor.
#include<stdio.h>

    void Displayfactor(int iNo)
    {
        int iCnt =0;
        for(iCnt =1;iCnt < iNo;iCnt++)
        {
           if((iNo% iCnt)==0)
           {
             printf("%d \n",iCnt);
           }
        }
       
    }

int main()
{
    auto int iValue=0;

    printf("Enter Factor of : \n");
    scanf("%d",&iValue);

    Displayfactor(iValue);

    return 0;
}
