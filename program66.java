import java.util.*;

class Digits
{
    public int countDigits(int iNo)
    {
       int icnt = 0 , iDigit = 0;

      
        
        while(iNo == 0)
        {
           

           icnt++;

           iNo = iNo / 10;  



        }
        return icnt ;

    }
}


class program66
{
    public static void main(String A[])
    { 
        int iRet = 0 ;
         Scanner sobj = new Scanner(System.in); 
         
          System.out.println("Enter number : ");
          int value = sobj.nextInt();

          Digits dobj = new Digits();

          int iRet = dobj.countDigits(value);

          System.out.println("number of digits are : "+iRet);


    }
}