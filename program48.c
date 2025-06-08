
#include<stdio.h>


int CountDigits(int iNo)
{
  int  icnt = 0 ;

  while (iNo != 0)
  {
     
     iNo = iNo / 10 ;
     icnt++;
  }
  return icnt;
}

int main()
{
    int ivalue = 0 , iRet;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);
 iRet = CountDigits(ivalue);

 printf("Number of digits are ; %d",iRet);

    return 0 ;
}