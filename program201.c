#include <stdio.h>
#include <stdbool.h>

bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    bool bflage = true;

    start = str;
    end = str;

    
    while (*end != '\0')  
    {
        end++;
    }

    end--; 

    while (start < end) 
    {
        if(*start != *end)
        {
            bflage = false;
            break;
        }

        start++;
        end--;
    }
   return bflage;
}

int main()
{    
    bool bret = true;
    char Arr[50] = {'\0'};


    printf("Enter the string:\n");
    scanf("%[^\n]%*c", Arr);

    bret = CheckPallindrome(Arr);

    if(bret = false)
    {
        printf("the string is not the palendrom");
    }
    else
    {
         printf("the string is  the palendrom");
    }

    return 0;
}
