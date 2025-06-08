#include<stdio.h>
#include<string.h>


int main ()
{

    int iRet = 0;
 char Arr[50] = {'\0'};


 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                
 

 iRet = strlen(Arr);

 printf("%d",iRet);

    return 0 ;
}