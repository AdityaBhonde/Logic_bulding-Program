#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{ 
    int icnt = 0;   int isum = 0;
    
    if(iNo<0)
    {
        iNo = - iNo;
    }
    for(icnt = 1 ; icnt<=(iNo/2);icnt++)
    {
        if((iNo%icnt) == 0)
        {
            isum = isum + icnt ;
            

        }
    }

     if(iNo == isum)
            {
                return true;
            }
            else
            {
                return false;
            }
}


int main()
{
   int ivalue = 0; bool ret = false;

   printf("enter the number ");
   scanf("%d",&ivalue);

   ret = CheckPerfect(ivalue);


   if(ret = true )
   {
    printf(" %d the number is perfect number ",ivalue);
   }
   else
   {
    printf("%d the number is not perfect number",ivalue);
   }



    return 0;
}