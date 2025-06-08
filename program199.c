#include <stdio.h>
#include <stdbool.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    // Move end to the last character
    while (*end != '\0')  // Fix: dereference the pointer
    {
        end++;
    }

    end--; // Point to last valid character

    while (start < end)  // Fix: '<' instead of '<=' to avoid double swap at center
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    // Correct usage: print the string using 'str', not 'Arr' (which is local to main)
    printf("String after the reversal: %s\n", str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string:\n");
    scanf("%[^\n]%*c", Arr);

    strrevX(Arr);

    return 0;
}
