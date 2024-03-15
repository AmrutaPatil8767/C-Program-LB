//Display Addition of number 
import java.util.*;

class Program203
{
    public static int Addition(int Brr[])
    {
        int iCnt=0, iSum =0;

        for(iCnt =0; iCnt < Brr.length;iCnt++)//Lenght proprty
        {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;
    }
    public static void main(String Arg [])
    {
        Scanner sobj =new Scanner(System.in);

        int iSize =0, iCnt =0,iRet =0;

        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[]= new int[iSize];

        System.out.println("Enter the element");
        for(iCnt =0; iCnt <iSize ;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
         iRet = Addition(Arr);

         System.out.println("Addition of all element is :"+iRet);

        sobj.close();
    }
}