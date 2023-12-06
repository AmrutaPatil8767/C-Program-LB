// Accept Number form user and calculate how much digit is there.(eg: 76543=5)
# include<Stdio.h>
int CountDigit(int iNo)
{
    auto int iCnt =0;
    

    while(iNo !=0)
    {
        
        iNo = iNo/10;
        iCnt ++;
    }
    return iCnt;
}
int main()
{
    auto int iValue=0;
    auto int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=CountDigit(iValue);
    printf("Number of Digit are :%d \n",iRet);
    return 0;

}