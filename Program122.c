// To count a letter a  String
#include<stdio.h>
#include<conio.h>

int Counta(char str[])
{
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str=='a')
        {
            iCnt++;
        }
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

    iRet = Counta(Arr);//strlenX(100)

    printf("Count of a letter is : %d\n",iRet);

    return 0;
}
