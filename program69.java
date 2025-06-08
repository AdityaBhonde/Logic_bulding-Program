import java.util.*;

class Number
{
    public int CountFrequency(int iNo)
    {
        int icnt = 0 , iDigit = 0  ;

        while(iNo == 0)
        {
            iDigit = iNo % 10 ;
            if(iDigit == 5)
            {
                icnt++;
            }
            
            iNo = iNo / 10 ;
        }

       return icnt ;
    }
}





class program69 
{

    public static void main(String A[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

        iRet =  nobj.CountFrequency(ivalue);


       System.out.println("the sum of non factors is "+iRet); 

    }
}