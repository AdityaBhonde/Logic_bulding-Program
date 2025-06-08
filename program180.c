#include<stdio.h>
// intput IndTa
// output I$$T$

void  strllwrX(char str[])
{
     
    while(*str != '\0')
    {
       
     if(*str >= 'A' && *str <= 'Z' )
     {
        
         *str = *str + 32 ;
        
       
     }
     str++; 
      
    } 

  
}


int main ()
{

   
 char Arr[50] = {'\0'};


 printf("Enter String : \n");
 scanf("%[^'\n']s",Arr);                
 
 strllwrX(Arr);
 
 printf("the updated string :%s",Arr);

 


    return 0 ;
}