#include<iostream>
using namespace std;

float calculatearea(float rad,float PI=3.14f)
{
    float ans=0.0f;
    ans=PI*rad*rad;
    return ans; 

}
int main()
{
   float ret=0.0f;
   
   ret=calculatearea(10.5f,3.14f);
   cout<<"Area of circle is:"<<ret<<"\n"; 

    ret=calculatearea(10.5f);
   cout<<"Area of circle is:"<<ret<<"\n";  
 
  ret=calculatearea(10.5f,7.20f);
   cout<<"Area of circle is:"<<ret<<"\n";  



 return 0;
}