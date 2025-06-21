#include<stdio.h>

void RemoveCapital(char *ptr)
{
    int icnt = 0 ;
    
    while (*ptr != '\0')
    {
       if((*ptr >= 'A') && (*ptr <= 'Z'))
       {
        *ptr = *ptr + 32 ;
       }
    }
     printf(ptr);
}
int main()
{
   char Arr[50] = {'\0'};

   
   printf("Enter the string :");
   scanf("%[^\n]%*c", Arr);  

 RemoveCapital(Arr);

    return 0;
}