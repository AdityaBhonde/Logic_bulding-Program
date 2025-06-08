import java.util.*;

class Number
{
    public int  SumFactors(int iNo)
    {
         int icnt = 0 , isum = 0 ; 
        if(iNo < 0)
        {
            iNo = - iNo;
        }
        for(icnt = 1 ; icnt <= (iNo/2) ; icnt++)
        {
            if(iNo % icnt == 0)
            {
               isum = isum + icnt;
            }
        }
    
     return isum;
    }
}





class program61
{

    public static void main(String A[])
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

       iRet =  nobj.SumFactors(ivalue);

       System.out.println("the num of the factor :"+iRet);

 
        

    }
}