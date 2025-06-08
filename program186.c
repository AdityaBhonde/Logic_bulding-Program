

#include <stdio.h>

int CharFrequency(char *str, char ch)
{
    int icount = 0;

    while (*str != '\0' )  
    {
        if ( (*str == ch || *str == ch + 32 )  )
        {
            icount++;
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
