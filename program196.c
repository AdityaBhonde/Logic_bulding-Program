
#include <stdio.h>
#include<stdbool.h>

void ReverseDisplay(char *str  )
{
  int iCount = 0 ;
  int icnt = 0 ;
  while (*str != 0)
  {
   str++;
   iCount++;
  }
  
  str--;

  for(icnt = iCount ; icnt > 0 ; icnt-- ,str--)
  {
    
    printf("%c",*str);
  }
 
  
  
}


int main()
{
    char Arr[50] = {'\0'};
    

    printf("Enter the string:\n");
    scanf("%[^\n]%*c", Arr);  

   ReverseDisplay(Arr);


   

    return 0;
}
