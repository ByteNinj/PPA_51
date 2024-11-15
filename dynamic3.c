#include<stdio.h>        //standard input output
#include<stdlib.h>     //standard library
int main()   
{          
    int *ptr=NULL;
    ptr=(int *)calloc(5,sizeof(int));    //1. dynamic memory allocation
    //2. use of memory
    //3. deallocate the memory
     free(ptr);
    return 0;
}