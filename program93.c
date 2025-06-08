#include <stdio.h>

// output 
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
   
 */

// Function to display the pattern
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &ivalue1);

    printf("Enter the number of columns:\n");
    scanf("%d", &ivalue2);

    Display(ivalue1, ivalue2);

    return 0;
}
