// To count a letter a  String
#include<stdio.h>
#include<conio.h>

int Counta(char str[], char ch)
{
    int iCnt =0;

    while(*str != '\0')
    {
        if(*str== ch)
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
    char cValue = '\0';
    int iRet =0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charater for frequency to calculated : \n");
    scanf(" %c",&cValue);   // Give Space before  %c because (it remain upper scanf enter as its so we  add space so enter does not remain)
    //it direct executed so space is requried 

    iRet = Counta(Arr,cValue);//strlenX(100)

    printf("Frequency of a letter is : %d\n",iRet);

    return 0;
}
