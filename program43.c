#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{ 
    int icnt = 0 ;
    
    if(iNo < 0)
    {
        iNo = - iNo ;

    }
    for(icnt = 2 ; icnt <= (iNo/2); icnt++)
    {
        if(iNo % icnt == 0)
        {
           
            break;
        }
    }

    if(icnt > (iNo/2))
    {
        return true ;
    }
    else
    {
        return false;
    }
}


int main()
{
   int ivalue = 0; bool bRet = false;

   printf("enter the number ");
   scanf("%d",&ivalue);

   bRet = CheckPrime(ivalue);


   if(bRet == true )
   {
    printf(" %d the number is prime number ",ivalue);
   }
   else
   {
    printf("%d the number is not prime number",ivalue);
   }



    return 0;
}