import java.util.Scanner;


class program215
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter the number of the elements :");
     int iSize = sobj.nextInt();

     int Arr[] = new int[iSize];
      int icnt = 0;
     for(icnt = 0 ; icnt <= Arr.length ; icnt++ )
     {
        Arr[icnt] = sobj.nextInt();
     }
     System.out.println("Elements of the array are :");

     for(icnt = 0 ; icnt <= Arr.length ; icnt++ )
     {
        System.out.println(Arr[icnt]);
     }
    Arr = null ;
    sobj = null ;
    }
   
}
