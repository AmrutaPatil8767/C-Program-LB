//Accept n Number from user and Calculate its Average  and display it.
#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;

//        1           2       3
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
       iSum=iSum+Arr[iCnt];
       
    }
    return ((float)iSum/(float)iSize); //type Caste to accurate output
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    float fRet=0.0f;
    
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
    fRet=Average(ptr,iCount);//Display(100,4)

    printf("Average ofElements are:%f \n",fRet);

    free(ptr);//(free(100))
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}
