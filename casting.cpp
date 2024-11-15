#include<iostream>
using namespace std;

class base{
    public:
    int i,j;
    void fun()    //defination of fun
    {
        cout<<"Inside base fun\n";
    }
};

class derived:public base               
{
    public:
    int x,y;
    void fun()                          //redefination of fun
    {
        cout<<"Inside derived fun\n";
    }

};
int main()
{
     derived dobj;   //8
     base bobj;        //16
    base *bptr=NULL;  //8
    derived *dptr=NULL; //8
    bptr=&bobj;   //nocasting  is allowed
    dptr=&dobj;   //nocsting  is allowed

    bptr=&dobj;   //upcasting is allowed

    dptr=&bobj;  //downcasting not allowed
    return 0;
}