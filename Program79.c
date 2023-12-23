//Accept n Number from user  and display it largest and Samllest Number.
#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iSize)
{
    int iCnt=0;
    int iMax = Arr[0];
    int iMin = Arr[0];//it handel -ve value

    for(iCnt=0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum element is : %d\n",iMax);
    printf("Minimum element is : %d\n",iMin);
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    
    printf("Enter Number of Elements that you wants to Enter: \n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount* sizeof(int));

    printf("Dynamic memory gets allocated succesully for %d element \n",iCount); // to get limit to values enter

    printf("Enter the %d Values : \n",iCount);
//        1        2         3
    for(iCnt=0;iCnt <iCount;iCnt++)
    {                                                   //O(N)
        printf("\n Enter the element no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);//4
    }
    MaxMin(ptr,iCount);//Display(100,4)

    free(ptr);//(free(100))
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}
