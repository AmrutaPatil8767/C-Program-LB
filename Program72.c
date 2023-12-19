//Display Odd Number in array
#include<stdio.h>
#include<stdlib.h>
void OddDisplay(int Arr[],int iSize)//(100,4)
{
   int iCnt=0;
   printf(" Odd Elements of the array are :\n");
   for(iCnt =0; iCnt < iSize;iCnt++)
   {
    if(Arr[iCnt] % 2!=0)
    {
        printf("%d\t",Arr[iCnt]);
    }
   }
    printf("\n");
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr = NULL;

    
    printf("Enter Number of elements that you want to enter :\n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated succesully for %d element \n",iCount); // to get limit to values enter

      printf("Enter the %d Values : \n",iCount);

    for(iCnt =0;iCnt< iCount;iCnt++)// Time Complexcity is Order of O(N)
    {
        printf("\n Enter the element no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    OddDisplay(ptr,iCount);//Display(100,4)
   
    free(ptr);//free(100)
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}