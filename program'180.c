#include<stdio.h>


void  struprX(char str[])
{
     
    while(*str != '\0')
    {
       
     if(*str >= 'a' && *str <= 'z' )
     {
        
         *str = *str - 32 ;
        
       
     }
     str++; 
      
    } 

  
}


int main ()
{

   
 char Arr[50] = {'\0'};


 printf("Enter String : \n");
 scanf("%[^'\n']s",Arr);                
 
 struprX(Arr);
 
 printf("the updated string :%s",Arr);

 


    return 0 ;
}