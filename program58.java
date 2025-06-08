import java.util.*;

class Arithematic 
{   
    public int No1;
    public int No2;

    // Constructor
    public Arithematic(int A , int B)  
    {
        this.No1 = A;
        this.No2 = B;
    }

    // No parameters needed, use the instance variables directly
    public int Addition()
    {
        return this.No1 + this.No2;
    }
}

class Program58 
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter first number: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number: ");
        iValue2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue1, iValue2); 

        iRet = aobj.Addition();  // Now valid, no arguments required

        System.out.println("Addition is: " + iRet);
    }
}
