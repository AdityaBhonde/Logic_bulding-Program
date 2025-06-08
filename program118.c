#include<stdio.h>


int main()
{ 
     int icnt = 0 ;
   int Arr[5] ;
   
    printf("enter the elements :\n");
    
    for(icnt = 0 ; icnt < 5 ; icnt++)
    {
        scanf("%d",Arr[icnt]);
    }

     printf("Elements form the array are : \n");

     for(icnt = 0 ; icnt < 5 ; icnt++)
     {
        printf("%d\n",Arr[icnt]);
     }

      

    return 0 ;
}