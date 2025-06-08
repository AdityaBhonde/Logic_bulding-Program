#include<stdio.h>
// to count the number of  the capital letter in the string ..
int CountCapital(char str[])
{
    int icnt = 0 ;
    while(*str != '\0')
    {
     
     if((*str >= 'A') && (*str <= 'Z'))
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
 
 CountCapital(Arr);

 iRet = CountCapital(Arr);
 printf("%d",iRet);

    return 0 ;
}