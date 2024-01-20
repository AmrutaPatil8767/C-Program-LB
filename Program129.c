// To count charater its Vowel or not(for upper case)
#include<stdio.h>
#include<conio.h>

int CountVowel(char Str[])
{
    int iCnt =0;
     while(*Str != '\0')
     {
        if((*Str == 'A')|| (*Str =='E')|| (*Str == 'I')|| (*Str =='O')||(*Str == 'U'))
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

    iRet = CountVowel(Arr);//strlenX(100)

    printf("Frequency of a Vowel letter is : %d\n",iRet);

    return 0;
}
