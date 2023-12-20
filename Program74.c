//Accept n Number from user and Calculate its Additon of Odd Number and display it.
#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

//        1           2       3
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] %2 !=0)
        {
            iSum=iSum+Arr[iCnt];
        }
    }
    return iSum;
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    int iRet=0;
    
    printf("Enter Number of Elements thatyou wants to Enter: \n");
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
    iRet=OddAddition(ptr,iCount);//Display(100,4)

    printf("Addition of Odd Elements are:%d \n",iRet);

    free(ptr);//(free(100))
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}
