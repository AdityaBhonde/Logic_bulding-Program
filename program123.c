#include<stdio.h>

int Summation(int ptr[] , int iSize)
{   
    int iSum = 0 ;
   int icnt = 0 ;
   for(icnt = 0 ; icnt < iSize ; icnt++)
   {
      iSum = iSum + ptr[icnt];
      
   }
  return iSum ; 
}

int main()
{ 
     int icnt = 0 , iRet ;
   int Arr[5] ;

   
    printf("enter the elements :\n");
    
    for(icnt = 0 ; icnt < 5 ; icnt++)
    {
        scanf("%d",&Arr[icnt]);
    }

    iRet = Summation(Arr,5);
    printf("the summation of the elements : %d ", iRet);
      

    return 0 ;
}