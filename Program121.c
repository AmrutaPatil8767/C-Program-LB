// To calculate a  String
#include<stdio.h>
#include<conio.h>

int strlenX(char str[])
{
    int iCnt =0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet =0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);//strlenX(100)

    printf("Length of string is : %d\n",iRet);

    return 0;
}
