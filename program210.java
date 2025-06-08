import java.util.Scanner;

class MarvellousString
{
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

class program210
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        MarvellousString nobj = new MarvellousString();

        int iret = 0 ;

        iret = nobj.CountSmall(str);

        System.out.println("the number of small char are :"+iret);
    }
}
