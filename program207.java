import java.util.*;


class program205
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String ");
      String name = sobj.nextLine();
     
     char Arr[] = name.toCharArray();

     System.out.println(Arr);
     System.out.println(Arr.length);

    }
}