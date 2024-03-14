//Display number
import java.util.*;

class Program201
{
   public static void main(String Arg [])
    {
        Scanner sobj =new Scanner(System.in);

        int iSize =0, iCnt =0;

        System.out.println("Enter the number of element :");
        iSize = sobj.nextInt();

        int Arr[]= new int[iSize];

        System.out.println("Enter the element");
        for(iCnt =0; iCnt <iSize ;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
         System.out.println("Enter the element");
        for(iCnt =0; iCnt <iSize ;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
        sobj.close();
    }
}