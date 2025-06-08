#include<stdio.h>
// to count the number of  the capital letter and small letter  in the string ..
void CountSmall(char str[])
{
    int ccnt = 0 , scnt = 0;
    int countDigit = 0 ;
    while(*str != '\0')
    {
     
     if((*str >= 'a') && (*str <= 'z'))
     {
        
        scnt++ ;
     }
      else if((*str >= 'A') && (*str <= 'Z'))                                                    
     {
        ccnt++ ;
     }
     else if ((*str >= '0') && (*str <= '9')) 
     {
       countDigit++; 
     }

     str++; 
      
    }

    printf("the num of small letter in the string : %d\n",scnt);
    printf("the num of capital letter in the string : %d\n",ccnt);
     printf("the num of digit in the string : %d\n",countDigit);
}


int main ()
{

    
 char Arr[50] = {'\0'};


 printf("Enter your name : \n");
 scanf("%[^'\n']s",Arr);                
 
 CountSmall(Arr);

 


    return 0 ;
}