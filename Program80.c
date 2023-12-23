//Accept n Number from user  and display its frequency of repated Number.
#include<stdio.h>
#include<stdlib.h>

int CalFrequency(int Arr[], int iSize,int iNo)
{
    int iCnt=0;
    int iFrequency=0;

    for(iCnt=0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    int iRet=0;
    int iValue=0;
    
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
    printf("Choose the element for given element:");
    scanf("%d",&iValue);
    iRet =CalFrequency(ptr,iCount,iValue);//Display(100,4)
    printf("%d Occur %d Value is\n",iValue,iRet);

    free(ptr);//(free(100))
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}
