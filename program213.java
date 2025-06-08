package MarvellousLB;

public class MarvellousString
{
    public String str ;
    
    public MarvellousString(String a)   // Fixed "string" to "String"
    {
        this.str = a;
    }

    public int CountSmall()
    {
        char Arr[] = str.toCharArray();        // convert the string to the Array 
        
        int icount = 0 ;
        int icnt = 0 ;

        for (icnt = 0 ; icnt < Arr.length ; icnt++)
        {
            if((Arr[icnt] >= 'a') && (Arr[icnt] <= 'z'))   
            {
                icount++;
            }
        }

        return icount;    
    } 
}
