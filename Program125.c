// To count charater its Captial or not
#include<stdio.h>
#include<conio.h>

int CountCaptial(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if((*Str >= 'A')&& (*Str <='Z'))
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

    iRet = CountCaptial(Arr);//strlenX(100)

    printf("Frequency of a Captial letter is : %d\n",iRet);

    return 0;
}
