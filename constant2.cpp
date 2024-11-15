#include<iostream>
using namespace std;
class demo
{
  public:
  int no1,no2;
  const int no3;
  const int no4;
   
    demo():no3(30),no4(40)
    {
       no1=10;
       no2=20;
      
    }
};
int main()
{
 demo obj;
  cout<<obj.no1<<"\t"<<obj.no2<<"\t"<<obj.no3<<"\t"<<obj.no4<<"\n";;
    return 0;
}