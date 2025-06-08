#include<stdio.h>

void Display(int ptr[] , int iSize)
{   
   int icnt = 0 ;
   for(icnt = 0 ; icnt < iSize ; icnt++)
   {
     printf("%d\n",ptr[icnt]);
   }
   
}

int main()
{ 
     int icnt = 0 ;
   int Arr[5] ;
   
    printf("enter the elements :\n");
    
    for(icnt = 0 ; icnt < 5 ; icnt++)
    {
        scanf("%d",&Arr[icnt]);
    }

    Display(Arr,5);

      

    return 0 ;
}