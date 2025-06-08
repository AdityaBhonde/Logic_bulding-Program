// Input : 4 #
// output :  
// -4  -3  -2  -1  0  1  2  3  4 


 

 #include<stdio.h>

// Function to display '*' iNo times
void Display(int iNo ,char ch)
{
    int icnt = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    for (icnt = 1; icnt <= iNo ; icnt++)    
    {
      printf("%c\t",ch);
        
       
    }
   
}

int main()
{
    int iValue = 0;
     char cvalue = '\0';

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    printf("Enter the char:\n");
    scanf("%c", &cvalue);

     printf("Accepted char is : %c \n",cvalue);
    Display(iValue,cvalue);

    return 0;
}

       
  