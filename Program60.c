//8 =bit 32
#include<stdio.h> // for printf and scanf
#include<stdlib.h> // for malloc and free                 free=delete,malloc=allocate memory,runtime memory allocation is called dynamic memory

void Display(int *Arr, int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}
int main()
{
    int iCount=0; // lenght of array
    int *ptr =NULL;
    int iCnt =0; // for loop

    printf("Enter thr Number of Elements :\n");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount * sizeof(int));   // memory allocation karun de size of intger yevadi
                                        //return value of malloc is void*  so we convert it into int *
    printf("Enter the Elements:\n");
 //        1       2          3
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);//4
    }
    Display(ptr,iCount);

    return 0;
}