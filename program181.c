#include<stdio.h>
// intput IndTa
// output I$$T$

void  strtogglerX(char str[])
{
     
    while(*str != '\0')
    {
       
     if(*str >= 'A' && *str <= 'Z' )
     {
        
         *str = *str + 32 ;
        
       
     }
      else if (*str >= 'a' && *str <= 'z')
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
 
 strtoggleX(Arr);
 
 printf("the updated string :%s",Arr);

 


    return 0 ;
}