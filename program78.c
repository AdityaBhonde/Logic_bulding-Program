// Input : 4
// output : $ $ $ $ 


 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo)
{
    int icnt = 0;
    for (icnt = iNo; icnt >= 1 ; icnt--)
    {
        printf("%d\t",icnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);  

    Display(iValue);

    return 0;
}
