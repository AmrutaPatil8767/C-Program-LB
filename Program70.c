//Display Count Even Number for array
#include<stdio.h>
#include<stdlib.h>
int EvenCount(int Arr[],int iSize)//(100,4)
{
   int iCnt=0;
   int iEvenCnt=0;

   for(iCnt =0; iCnt < iSize;iCnt++)
   {
    if(Arr[iCnt] % 2==0)
    {
       iEvenCnt++;
    }
   }
   return iEvenCnt;
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr = NULL;
    int iRet=0;

    
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
    iRet=EvenCount(ptr,iCount);//Display(100,4)
   printf("Count of Even Number is:%d\n",iRet);

    free(ptr);//free(100)
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}