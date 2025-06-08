#include<stdio.h>

int CountSpace(char str[])
{
    int icnt = 0 
    while(*str != '\0')
    {
       
     if(*str == ' ' )
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


 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                
 
 CountSpace(Arr);
 iRet =  CountSpace(Arr);

 printf("the number of spaces in the string %d :", iRet);
 


    return 0 ;
}