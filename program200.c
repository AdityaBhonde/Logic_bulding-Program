#include <stdio.h>


bool CheckPallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    

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
           
            break;
           
        }

        start++;
        end--;
    }
    if(start < end )
    {
        return false;
    }
    else
    {
        return true;
    }
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
