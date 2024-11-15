#include<stdio.h>        //standard input output
#include<stdlib.h>     //standard library
int main()   
{          
   void *ptr=NULL;
   ptr=(int *)malloc(5*sizeof(int));    //1. dynamic memory allocation
 //2. use of memory
 //3. deallocate the memory
 free(ptr);
    return 0;
}