#include<stdio.h>
int main()
{
   int A=10, B=10;

   int no1=0,no2=0;
     no1=A--;          //post decrement(initialise then incement)
      printf("Value of no1:%d\n",no1);//10
      printf("Value of A:%d\n",A);//9


     no2=--B;      //pre decrement(increment then initialize)
         printf("Value of no2:%d\n",no2);//9
            printf("Value of B:%d\n",B);//9
    return 0;
}