#include<stdio.h>
#include<stdlib.h>


int main()
{ 
    int iLength = 0 ;
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
    // step 2 : use that memory
    // use
    
    // step 3 : Free the memory
    free(ptr);

    return 0 ;
}