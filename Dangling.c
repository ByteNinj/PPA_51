#include<stdio.h>
int mnain()

{
int *p=NULL;
 p=(int *)malloc(5*sizeof(int))
 free(p);
 //now p is a dangling pointer
 p=NULL:
    return 0;
}