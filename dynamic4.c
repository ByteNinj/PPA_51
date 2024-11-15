#include<stdio.h>        //standard input output
#include<stdlib.h>     //standard library
int main()   
{          
   int *ptr=NULL;
   ptr=(int *)malloc(5*sizeof(int));  
   ptr=(int *)realloc(ptr,7*sizeof(int));   //case1
   ptr=(int *)realloc(ptr,3*sizeof(int));    //case2
    ptr=(int *)realloc(NULL,3*sizeof(int));  //LIKE MALLOC
    ptr=(int *)realloc(ptr,0);               //like free
    return 0;
}