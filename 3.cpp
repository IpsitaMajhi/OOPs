#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"constructor A"<<endl;
    }
    ~a(){
        cout<<"destructor A"<<endl;
    }
};
class c{
    public:
    c(){
        cout<<"constructor C"<<endl;
    }
    ~c(){
        cout<<"destructor C"<<endl;
    }
};
class b:public a,public c{
    public:
    b(){
        cout<<"constructor B"<<endl;
    }
    ~b(){
        cout<<"destructor B"<<endl;
    }
};
int main(){
    b ob1;
};
