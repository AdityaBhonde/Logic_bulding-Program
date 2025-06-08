#include<stdio.h>
// intput IndTa
// output I$$T$

int Change(char str[])
{
     
    while(*str != '\0')
    {
       
     if(*str >= 'a' && *str <= 'z' )
     {
        
         *str = '$';
       
     }
     

     str++; 
      
    } 

  
}


int main ()
{

   
 char Arr[50] = {'\0'};


 printf("Enter String : \n");
 scanf("%[^'\n']s",Arr);                
 
 Change(Arr);
 
 printf("the updated string :%s",Arr);

 


    return 0 ;
}