#include<stdio.h>
int main()
{
  int arr[]={10,20,30,40};
  printf("%d\n",arr[0]);
  printf("%d\n",arr[1]);
  printf("%d\n",arr[2]);
  printf("%d\n",arr[3]);
  printf("\n");


  printf("%lu\n",sizeof arr);
  printf("%lu\n",sizeof arr[0]);
  printf("%lu\n",sizeof arr[2]);
  printf("\n");


  printf("%d\n",arr);
  printf("%d\n",&arr);
  printf("%d\n",&arr[0]);
  printf("%d\n",&arr[2]);
  printf("%d\n",&arr[3]);
  printf("\n");




    return 0;
}