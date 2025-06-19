#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr , int iSize)
{
   int SumEven = 0 , SumOdd = 0 ;
   int iCnt = 0;

    int  iRet = 0 ;

   for(iCnt = 0 ; iCnt <= iSize ; iCnt++)
   {
    if(Arr[iCnt] % 2 == 0)
   {
    SumEven = SumEven + Arr[iCnt];
   }
   else if(Arr[iCnt] % 2 != 0)
   {
    SumOdd = SumOdd + Arr[iCnt];
   }
   }
   
   iRet = (SumEven - SumOdd);

   return iRet ;
}

int main()
{
int iLength = 0 , iRet = 0 ;
int *ptr = NULL ;
int icnt = 0;

  printf("Enter the number of elements : \n");
    scanf("%d",&iLength);
   // Stem 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));   //(int *)  is the typecasting .

    if(ptr == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }
    printf("enter the elemtent : \n");
    
    
    for(icnt = 0 ; icnt < iLength ; icnt++  )
    {
        scanf("%d", &ptr[icnt]);
    }
   

     iRet = Difference(ptr , iLength);

     printf("the diffrence btw the sumodd and sumeven :",iRet);

}

