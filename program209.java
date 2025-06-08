import java.util.Scanner;


class program209
{
    public static void main(String A[])

    {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the string : ");
    String str = sobj.nextLine();

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
     System.out.println("the number of small char are :"+icount);
    }
}