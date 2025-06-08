import java.util.*;

class Number
{
    public int AdditionNonFactors(int iNo)
    {
         int icnt = 0 , isum = 0;
       
        for(icnt = 1 ; icnt <= (iNo) ; icnt++)
        {
            if((iNo % icnt) != 0)
            {
               isum  = isum + icnt;  
            }
        }
       return isum;
    
    }
}





class program62 
{

    public static void main(String A[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

        iRet =  nobj.SumNonfactors(ivalue);


       System.out.println("the sum of non factors is "+iRet); 

    }
}