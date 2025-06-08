#include<stdio.h>

int Count(char str[])
{
    int icnt = 0; 
    while(*str != '\0')
    {
       
     if(*str == 'a' )
     {
        
        icnt++ ;
     }
     

     str++; 
      
    }

   return icnt ; 
}


int main ()
{

   int iRet = 0; 
 char Arr[50] = {'\0'};


 printf("Enter String : \n");
 scanf("%[^'\n']s",Arr);                
 
 Count(Arr);
 iRet =  Count(Arr);

 printf("the number of spaces in the string %d :", iRet);
 


    return 0 ;
}