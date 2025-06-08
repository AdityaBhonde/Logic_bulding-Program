import java.util.*;

// Input: 4 4
/*
   A B C D
   
*/

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char ch = 'A';
        int i = 0 , j = 0 ;

        for(int i = 1 ,ch = 'A' ; i <= iRow; i++ , ch++)
        {
            for( j = 1  ; j <= iCol ; j++ )
            
            {
                System.out.print(ch + "\t");
                
            }
            System.out.println();
        }
    }
}

class Program99
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}
