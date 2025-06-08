#include<stdio.h>
// to count the number of  the element in the string ..
int StrLenX(char *str)
{
    int icnt = 0 ;
    while(*str != '\0')
    {
     
      str++;
      icnt++;
      
      
    }

    return icnt ;
}


int main ()
{

    int iRet = 0;
 char Arr[50] = {'\0'};


 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                
 
 StrLenX(Arr);

 iRet = StrLemX(Arr);
 printf("%d",iRet);

    return 0 ;
}