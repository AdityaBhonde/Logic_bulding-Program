import java.util.*;

class Number
{
    public boolean CheckEven(int iNo)
    {
        
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    
    
    
    }
}





class program59 
{

    public static void main(String A[])
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

        bRet = nobj.CheckEven(ivalue);


        if(bRet == true)
        {
            System.out.println(ivalue+"is even");
        }
        else
        {
             System.out.println(ivalue+"is odd");
        }
        }



    }
