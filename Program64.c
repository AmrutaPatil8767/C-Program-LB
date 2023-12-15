//Accept n Number from user and Display Even number from that number.
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iSize)
{
    int iCnt=0;

    printf("\n Even Elements of the array are :\n");
//        1           2       3
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            printf("%d\t",Arr[iCnt]);//4
        }
    }
    printf("\n");
}
int main()
{
    int iCount=0;
    int iCnt=0;
    int *ptr=NULL;
    
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
    DisplayEven(ptr,iCount);//Display(100,4)

    free(ptr);//(free(100))
    printf("Dynamic memory gets deallocated Succesfully....\n");

    return 0;
}
