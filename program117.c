#include<stdio.h>


int main()
{ 
     int icnt = 0 ;
   int Arr[5] ;
   
    printf("enter the elements :\n");
    
    scanf("%d", &Arr[0]);
    scanf("%d", &Arr[1]);
     scanf("%d", &Arr[2]);
     scanf("%d", &Arr[3]);
     scanf("%d", &Arr[4]);

     printf("Elements form the array are : \n");

     for(icnt = 0 ; icnt < 5 ; icnt++)
     {
        printf("%d\n",Arr[icnt]);
     }

      

    return 0 ;
}