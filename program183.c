#include<stdio.h>
int (char str[])
{
     
   

  
}


int main ()
{

   
 char Arr[50] = {'\0'};

char cValue = '\0';

printf("Enter the string : \n");
scanf("%[^'\n']s",Arr);

//problem due to the buffer cleaner (error)
printf("Enter the char :\n")
scanf("%c",&cValue);
 


    return 0 ;
}