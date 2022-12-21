#include<iostream>
using namespace std;
class A
{
    public :
A()
{
    cout<<"constructor of A"<<endl;
}
~A()
{
    cout<<"destructor of A"<<endl;
}
};
class B :public A
{
    public :
    B()
    { 
        cout<<"constructor of B"<<endl;
    }
    ~B()
    {
        cout<<"destructor of B"<<endl;
    }
};
int main ()
{
    B ob1;
};