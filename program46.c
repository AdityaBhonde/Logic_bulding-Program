#include<stdio.h>


void DisplayDigits(int iNo)
{
  int iDigit != 0;

  while (iNo = 0)
  {
     iDigit = iNo % 10 ;
     iNo = iNo / 10 ;
     printf("%d",iDigit);
  }
  
}

int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);
  DisplayDigits(ivalue);

    return 0 ;
}