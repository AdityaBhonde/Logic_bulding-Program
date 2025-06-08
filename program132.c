#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[] , int iSize)
{
   
   int icnt = 0 ;
   bool bflage = false;

    printf("Enter elemtens are :");

    for(icnt = 0 ; icnt < iSize ; icnt++  )
    {
        if(Arr[icnt] == 11 )
        {
          bflage = true;
          break;
        }
        else 
        {
            bflage = false;
        }
        
    }

   return bflage ;
}


int main()
{ 
    int iLength = 0 ;
    bool bRet = false ;

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
    bRet = Search(ptr , iLength);

    if (bRet = true)
    {
        printf("the number 11 is fount in elemtns ");
    }
    else
    {
        printf("the number 11 is not  fount in elemtns ");
    }
   
    // step 3 : Free the memory
    free(ptr);

    return 0 ;
}