import java.util.*;


class program205
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String ");
      String name = sobj.nextLine();
     
     int icnt = 0 ;

     for(icnt = 0 ; icnt < name.length() ; icnt++ )

      {
        System.out.println(name.charAt(icnt));
      
      }

    }
}