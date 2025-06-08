#include<stdio.h>
// to count the number of  the capital letter and small letter  in the string ..
void CountSmall(char str[])
{
    int ccnt = 0 , scnt = 0;
    while(*str != '\0')
    {
     
     if((*str >= 'a') && (*str <= 'z'))
     {
        
        scnt++ ;
     }
    else                                                      //  this logical incorrect program .
     {
        ccnt++ ;
     }
     

     str++; 
      
    }

    printf("the num of small letter in the string : %d\n",scnt);
    printf("the num of capital letter in the string : %d\n",ccnt);

}


int main ()
{

    
 char Arr[50] = {'\0'};


 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                
 
 CountSmall(Arr);

 


    return 0 ;
}