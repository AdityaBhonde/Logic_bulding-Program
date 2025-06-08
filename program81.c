// Input : 4
// output :  
// 4 * 3 * 2 * 1 *


 

 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo)
{
    int icnt = 0;
    for (icnt = iNo; icnt >= 1 ; icnt--)
    {
        printf("%d\t*\t",icnt);
        
       
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);  

    Display(iValue);

    return 0;
}

       
  