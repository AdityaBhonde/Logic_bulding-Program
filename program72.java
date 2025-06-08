import java.util.*;

class Number
{
    public int Reverse(int iNo)
    {
         int  iDigit = 0  , icnt = 0 , iRev = 0 ;

    while(iNo != 0)
        {
           
           iDigit = iNo % 10 ;
           iRev = iRev * 10 + iDigit ;

           iNo = iNo / 10;
         
            
        }
      return iRev ;
    }
}





class program72
{

    public static void main(String A[])
    {
         int iRet = 0;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

          iRet = nobj.Reverse(ivalue);

          System.out.println(iRet);

 

    }
}