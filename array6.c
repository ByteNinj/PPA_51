#include<stdio.h>
int main()
{
  int arr[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
  printf("%d\n",sizeof arr);
 printf("%d\n", arr[1][0]);
  printf("%d\n",arr[0][2]);
  printf("%d\n",arr[2][3]);
  printf("%d\n",arr[1][1]);
  printf("%d\n",arr[1][2]);
   printf("%d\n",arr[2][2]);
  printf("%d\n",arr[0][0]);
    return 0;
}