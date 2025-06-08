// Input : 4
// output :  
// -4  -3  -2  -1  0


 

 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo)
{
    int icnt = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    for (icnt = -iNo; icnt <= 0 ; icnt++) // N
    {
        printf("%d\t",icnt);
        
       
    }
    for (icnt = 1; icnt <= iNo ; icnt++)  // N
    {
        printf("%d\t",icnt);
        
       
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

       
  