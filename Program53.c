// Accept Number form user and display its addition .(eg: 7521 = 15)
# include<Stdio.h>
int SumDigit(int iNo)
{
    auto int iDigit =0;
    auto int iSum =0;


    while(iNo !=0)
    {
        iDigit=iNo%10;
        iSum = iSum +iDigit;        
        iNo = iNo/10;
        
    }
    return iSum;
}
int main()
{
    auto int iValue=0;
    auto int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=SumDigit(iValue);
    printf("Addition of Number :%d \n",iRet);
    return 0;

}