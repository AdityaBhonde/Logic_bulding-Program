
#include<stdio.h>


int CountEvendigits(int iNo)
{
  int iDigit = 0 , icnt = 0 ;

  while (iNo != 0)
  {
     iDigit = iNo % 10 ;
     iNo = iNo / 10 ;
    if(iDigit % 2 == 0)
    {
        icnt++;
    }
  }
  return icnt;
}

int main()
{
    int ivalue = 0 , iRet;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

   iRet = CountEvendigits(ivalue);

 printf("Number of even  digits are ; %d",iRet);

    return 0 ;
}