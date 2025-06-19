#include<stdio.h>

void Display(int iRow , int iCol )
{
    int i = 0 , j = 0 ;
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
           if(i < j)
           {
            printf("%c\t",'*');
           }
           else if(i > j)
           {
            printf("%c\t",'#');
           }
           else
           {
              printf("%c\t",'@');
           }
           
        }
        printf("\n"); // To print each row on a new line
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0; 

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2);

    return 0;
}
