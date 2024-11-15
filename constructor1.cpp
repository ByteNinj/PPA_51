#include<iostream>
using namespace std;
class marvellous
{
  public:
  int no1;
  int no2;
   marvellous()    //default
   {

    cout<<"Inside constructor\n";
    no1=0;
    no2=0;
   }

   marvellous(int a,int b)  //parameterised
   {

    cout<<"Inside parameterized constructor\n";
    no1=a;
    no2=b;
    //cout<<no1<<"\n"<<no2<<"\n";
   }

 ~marvellous()
   {
      cout<<"Inside destructor\n";
   }
 void fun()
   {
    cout<<"Inside fun\n";
   }
};


int main()
{
 
  marvellous mobj1;
  marvellous mobj2(11,21);
  marvellous mobj3;
    return 0;
}