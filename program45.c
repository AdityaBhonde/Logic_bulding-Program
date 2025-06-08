#include<stdio.h>


int main()
{
    int iNo = 751; 
    int iDigit = 0;

    iDigit = iNo % 10;
    printf(" the digit is %d\n",iDigit);
    iNo = iNo / 10;
    printf("updated iNo : %d\n",iNo);

     iDigit = iNo % 10;
    printf(" the digit is %d\n",iDigit);
    iNo = iNo / 10;
    printf("updated iNo : %d\n",iNo);

     iDigit = iNo % 10;
    printf(" the digit is %d\n",iDigit);
    iNo = iNo / 10;
    printf("updated iNo : %d\n",iNo);


    return 0 ;
}