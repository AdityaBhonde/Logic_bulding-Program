// input deR2mr  find R 
// output 2 occurs 2 (correct)
// 
#include <stdio.h>

int CharFrequency(char *str, char ch)
{
    int icount = 0;

    while (*str != '\0' )  
    {
      if (ch >= 'A' && ch <= 'Z')           // capital
      {
        if(*str == ch || *str == ch + 32)
        {
            icount++;
        }
      }
       else if (ch >= 'a' && ch <= 'z')    // small
       {
          if(*str == ch || *str == ch - 32)
        {
            icount++;
        }
       }
       else                                    // other
       {
        if(*str == ch)
        {
        icount++;
       }
    }
      str++;
    }

    return icount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the string:\n");
    scanf("%[^\n]%*c", Arr);  

    printf("Enter the character:\n");
    scanf(" %c", &cValue);   

    iRet = CharFrequency(Arr, cValue);

    printf("%c occurs %d times\n", cValue, iRet); 

    return 0;
}
