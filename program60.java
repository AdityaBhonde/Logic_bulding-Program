import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    {
         int icnt = 0; 
        if(iNo < 0)
        {
            iNo = - iNo;
        }
        for(icnt = 1 ; icnt <= (iNo/2) ; icnt++)
        {
            if(iNo % icnt == 0)
            {
                System.out.println(icnt);
            }
        }
    
    
    }
}





class program60 
{

    public static void main(String A[])
    {
     
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number :");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();

         nobj.DisplayFactors(ivalue);


        

    }
}