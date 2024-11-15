#include<iostream>
using namespace std;
class demo{
   public:
   int a,b;
   demo()
   {
    a=0;
    b=0;
   }
  demo(int i,int j)
  {
   a=i;
   b=j;
  }
  demo(demo &ref)
   {
   a=ref.a;
   b=ref.b;

   }
  ~demo()
  {
    cout<<"Inside destructor\n";
  }



};

int main()
{
   demo obj1(11,21);
   demo obj2(obj1);
  return 0;
}