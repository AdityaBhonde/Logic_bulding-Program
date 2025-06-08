// Input : 4
// output *  *  *  * 

/* 
start 
   Accept the frequency
   Iterte form 1 to that frequency 
      Display * on screen
    continue
 stop     
 */

 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo)
{
    int icnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\t");
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
