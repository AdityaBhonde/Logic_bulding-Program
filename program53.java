import java.util.Scanner;   


class Program53 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter Frist number : ");
          int  iNo1 = sobj.nextInt();
        

         System.out.println("Enter second number : ");
          int  iNo2 = sobj.nextInt();

          int iAns = 0;

          iAns = iNo1 + iNo2;

          System.out.println("The Addition of the two number is :"+iAns);


    }
}