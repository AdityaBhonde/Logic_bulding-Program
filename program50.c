
#include<stdio.h>


int SumDigits(int iNo)
{
  int iDigit = 0 , isum = 0;

  while (iNo != 0)
  {
     iDigit = iNo % 10 ;
     iNo = iNo / 10 ;
     isum = isum + iDigit;
  }
  return isum;
}

int main()
{
    int ivalue = 0 , iRet;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);
 iRet = SumDigits(ivalue);

 printf("the sum of the digit  : %d",iRet);

    return 0 ;
}