import java.util.Scanner;

class NNumberX
{   
    public int Arr[];

    public NNumberX(int iSize)
    {
        Arr = new int[iSize];
    }

    public int CountEven()
    {    
        int icount = 0 , icnt = 0 ;
        for(icnt = 0 ; icnt < Arr.length ; icnt++ )    
        {
            if ( (Arr[icnt] % 2) == 0 )                  
            {
                icount++;
            }    
        }
        return icount;
    }
}

class program218
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
     
        System.out.println("Enter the number of the elements :");
        int iSize = sobj.nextInt();
        
        NNumberX nobj = new NNumberX(iSize);   
        
        int icnt = 0;

        System.out.println("Enter the elements of the array:");
        for(icnt = 0 ; icnt < nobj.Arr.length ; icnt++ )   
        {
            nobj.Arr[icnt] = sobj.nextInt();
        }

        System.out.println("Elements of the array are:");
        for(icnt = 0 ; icnt < nobj.Arr.length ; icnt++ )   
        {
            System.out.println(nobj.Arr[icnt]);
        }

        int iret = 0 ;
        iret = nobj.CountEven();

        System.out.println("Count of even numbers in array is: " + iret);

        sobj = null ;
    }
}
