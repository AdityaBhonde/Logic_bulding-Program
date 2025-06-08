import java.util.Scanner;

class NNumberX
{   
    private  int Arr[];         // Arr is done the private , 

    public NNumberX(int iSize)
    {
        Arr = new int[iSize];  // Resource allocation
        System.out.println("Allocation of the resorces");
    }
 
    protected void finalize()             // the finalize method is use in only protected mode only 
    {
        System.out.println("deallocation of the resorces");
        Arr = null ;
    }
    public void Accept()      // get method 
    {
       int icnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of the array:");
        for(icnt = 0 ; icnt < this.Arr.length ; icnt++ )   
        {
            this.Arr[icnt] = sobj.nextInt();
        }
    }

    public void Display()    // display methhod 
    {
        int icnt = 0 ;
       System.out.println("Elements of the array are:");
        for(icnt = 0 ; icnt < this.Arr.length ; icnt++ )   
        {
            System.out.println(this.Arr[icnt]);
        }

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

class program223
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
     
        System.out.println("Enter the number of the elements :");
        int iSize = sobj.nextInt();
        
        NNumberX nobj = new NNumberX(iSize);   
        

        nobj.Accept();
        nobj.Display();
       

       
        int iret = 0 ;
        iret = nobj.CountEven();

        System.out.println("Count of even numbers in array is: " + iret);

        sobj = null ;

        nobj = null ;

     gc.System();
}  
    }
    
