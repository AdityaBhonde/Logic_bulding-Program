#include<stdio.h>

void Display(int *ptr , int iSize)
{
   printf("%d\n",ptr[0]);           //   ptr[3] -> *(ptr + 3)
   printf("%d\n",ptr[1]);
   printf("%d\n",ptr[2]);
   printf("%d\n",ptr[3]);
   printf("%d\n",ptr[4]);
   
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