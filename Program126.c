// To count charater its Digit or not
#include<stdio.h>
#include<conio.h>

int CountDigit(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if((*Str >= '0')&& (*Str <='9'))
        {
            iCnt++;
        }
         Str++;
     }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet =0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountDigit(Arr);//strlenX(100)

    printf("Frequency of a Digit letter is : %d\n",iRet);

    return 0;
}
