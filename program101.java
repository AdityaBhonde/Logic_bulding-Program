import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char ch1 = 'a';
        char ch2 = 'A';

        for(int i = 1; i <= iRow; i++, ch1++, ch2++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if((j % 2) != 0)
                {
                    System.out.print(ch1 + "\t");
                }
                else 
                {
                    System.out.print(ch2 + "\t");  
                }
            }
            System.out.println();
        }
    }
}

class program101
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
