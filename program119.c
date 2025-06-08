#include<stdio.h>

void Display(int *ptr , int iSize)
{
   printf("%d\n",*ptr);
   ptr++;
   printf("%d\n",*ptr);
   ptr++;
   printf("%d\n",*ptr);
   ptr++;
   printf("%d\n",*ptr);
   ptr++;
   printf("%d\n",*ptr);
   ptr++;
   
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