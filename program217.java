import java.util.Scanner;
class NNumberX
{
    public int CountEven(int Arr[])
    {    
       int  icount = 0 , icnt = 0 ;
       for(icnt = 0 ; icnt < Arr.length ; icnt++ )    
        {
            if ( Arr[icnt] % 2 == 0 )                  
            {
                icount++;
            }    
        }
        return icount;
    }
}
class program217
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
     
        System.out.println("Enter the number of the elements :");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        int icnt = 0;

        for(icnt = 0 ; icnt < Arr.length ; icnt++ )    
        {
            Arr[icnt] = sobj.nextInt();
        }

        

        NNumberX nobj = new NNumberX();
        int iret = 0 ;
        
        iret = nobj.CountEven(Arr);
        System.out.println("Elements of the even number in array are :");


        Arr = null ;
        sobj = null ;
    }
}
