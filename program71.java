import java.util.*;

class Number
{
    public void CountEven(int iNo)
    {
         int  iDigit = 0  ;

    while(iNo != 0)
        {
          

            if((( iNo % 10) % 2) == 0)
            {
               System.out.println(iNo % 10); 
            }
            
            iNo = iNo / 10 ;
        }

    }
}





class program71
{

    public static void main(String A[])
    {
        
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

          nobj.CountEven(ivalue);

 

    }
}