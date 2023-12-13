//8 =bit 32
#include<stdio.h> // for printf and scanf
#include<stdlib.h> // for malloc and free                 free=delete,malloc=allocate memory,runtime memory allocation is called dynamic memory

int main()
{
    int iCount=0; // legent of array
    int *ptr =NULL;
    int iCnt =0; // for loop used

    printf("Enter thr Number of Elements :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount * sizeof(int));   // memory allocation karun de size of intger yevadi
                                        //return value of malloc is void*  so we convert it into int *
    printf("Enter the Elements:\n");
//           1       2          3
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);//4
    }
    printf("Your entered elements are:\n");
//           1       2           3
    for(iCnt=0;iCnt < iCount; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    return 0;
}