import java.util.Scanner;

class MarvellousString
{ 
    public String str ;
    
    public MarvellousString(string a)
    {
        this.str = a;
    }
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();        // convert the string to the Array 
        
        int icount = 0 ;
        int icnt = 0 ;

        for (icnt = 0 ; icnt < Arr.length ; icnt++)
        {
            if((Arr[icnt] >= 'a') && (Arr[icnt] <= 'z'))   
            {
                icount++;
            }
        }

        return icount;    // Moved this inside the method
    } 
}

class program212
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String data = sobj.nextLine();

        MarvellousString nobj = new MarvellousString(data);
        
       

        int iret = 0 ;
        
        iret = mobj.CountSmall();

        System.out.println("the number of small char are :"+iret);
    }
}
