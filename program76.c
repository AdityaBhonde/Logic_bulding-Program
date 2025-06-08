// Input : 4
// output : $ $ $ $ 


 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo)
{
    int icnt = 0;
    for (icnt = 1; icnt <= iNo; icnt++)
    {
        printf("$\t");
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
