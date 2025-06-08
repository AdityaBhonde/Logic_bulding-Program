
#include <stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str , char ch )
{
  while (*str != '\0')
  {
    if(*str == ch )
    {
        break;
    }
    str++;
  }

  if(*str == ch )
  {
    return true ;

  }
  else
  {
     return false;
  }
  
}


int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false ;
    char cValue = '\0';

    printf("Enter the string:\n");
    scanf("%[^\n]%*c", Arr);  

    printf("Enter the character:\n");
    scanf(" %c", &cValue);   

    bRet = CharFrequency(Arr, cValue);

    if(bRet = true)
    {
        printf("the char %c is found in the string ",cValue);
    }
    else
    {
        printf("the char %c is  not found in the string ",cValue);
    }


   

    return 0;
}
