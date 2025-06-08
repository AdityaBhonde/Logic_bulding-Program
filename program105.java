import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
           int i = 0 , j = 0 ;
           int iNo = 0;


        for( i = 1 ,iNo = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; iNo++ , j++ )
            {
                if(i == j )
                {
                    System.out.print("*\t");
                }
                else
                {
                   System.out.print("\0\t");    
                }
            }
            System.out.println();
        }
    }
}

class program106
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}
