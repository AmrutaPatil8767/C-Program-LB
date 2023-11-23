//Accept number form user and display its factor.
#include<stdio.h>
#include<stdbool.h>

    void Displayfactors(int iNo)
    {
        int iCnt =0;

        printf("Factor of %d are :\n",iNo);
//             1          2           3
        for(iCnt =1;iCnt <= (iNo/2);iCnt++)
        {
           if((iNo% iCnt)==0) //4
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

    Displayfactors(iValue);

    return 0;
}

// Time Complexity : O(N), O(2N),O(N/2),O(N/4)
