import java.util.Scanner;

class MarvellousString
{ 
    public String str ;
    
    public MarvellousString(String a)   // fixed "string" to "String"
    {
        this.str = a;
    }
    
    public String UpdatedString()
    {
        char Arr[] = str.toCharArray();        // convert the string to the Array 
        
        int icnt = 0 ;

        for (icnt = 0 ; icnt < Arr.length ; icnt++)
        {
            if((Arr[icnt] >= 'A') && (Arr[icnt] <= 'Z'))   
            {
                Arr[icnt] = '_';
            }
        }

        String ret = new String(Arr);
        return ret ;
    }
}

class program214
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String data = sobj.nextLine();

        MarvellousString nobj = new MarvellousString(data);  
        
        String sret = null ;
        
        sret = nobj.UpdatedString();    

        System.out.println("updated string is  :"+sret);
    }
}
