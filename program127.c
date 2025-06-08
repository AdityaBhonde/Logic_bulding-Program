#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[] , int iSize)
{
   int iSum = 0 ;
   int icnt = 0 ;

    printf("Enter elemtens are :");

    for(icnt = 0 ; icnt < iSize ; icnt++  )
    {
        iSum = iSum + Arr[icnt] ;
    }

   return iSum; 
}
int main()
{ 
    int iLength = 0 , iRet;
    int *ptr = NULL ;

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
    
    int icnt = 0;
    
    for(icnt = 0 ; icnt < iLength ; icnt++  )
    {
        scanf("%d", &ptr[icnt]);
    }

    
    // step 2 : use that memory
    iRet = Display(ptr , iLength);

    printf("the summation of the elements are : %d", iRet);
   
    // step 3 : Free the memory
    free(ptr);

    return 0 ;
}