#include<iostream>
using namespace std;
int main()
{ 
     int arr[5];     //static memory
     int *ptr=NULL;

     ptr=new int[5];   //dynamic memory allocation
    
     delete[]ptr;      //deallocte the memoy
    return 0;
};