#include<iostream>
using namespace std;
class demo{
   public:
   int A;
   private:
   int B;
   public:
        demo()
         {
          A=11;
          B=21;
         }
   void fun()
  {
cout<<"value of A is:::"<<A<<"\n";     //ALLOWED
cout<<"value of B is:::"<<B<<"\n";     //ALLOWED

  }
int main()
{
demo obj;
obj.fun();                             //ALLOWED
cout<<"value of A is:::"<<obj.A<<"\n";  //ALLOWED
cout<<"value of B is:::"<<obj.B<<"\n";  //NOT ALLOWED
return 0;
}
};