#include<stdio.h>




int main ()
{
 char Arr[50] = {'\0'};

 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                


 printf("your name is : %s\n",Arr);



    return 0 ;
}