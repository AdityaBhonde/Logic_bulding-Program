import java.util.*;

class Number
 {
    public void Sum(int iNo)
     {
        int icnt = 0, isum = 0, iNsum = 0;

        if(iNo < 0) {
            iNo = -iNo;
        }

        for(icnt = 1; icnt <= iNo; icnt++) 
        {
            if((iNo % icnt) != 0)
            {
                iNsum = iNsum + icnt;  // Non-factors
            } 
            else 
            {
                isum = isum + icnt;    // Factors
            }
        }

        System.out.println("The sum of non-factors: " + iNsum);
        System.out.println("The sum of factors: " + isum);
    }
}

class program64 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in); 

        System.out.println("Enter the number:");
        int ivalue = sobj.nextInt();

        Number nobj = new Number();
        nobj.Sum(ivalue);
    }
}
