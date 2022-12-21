#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"constructor of A"<<endl;
    }
    ~a(){
        cout<<"destructor of A"<<endl;
    }
};

class b:public a{
    public:
    b(){
        cout<<"constructor of B"<<endl;
    }
    ~b(){
        cout<<"destructor of B"<<endl;
    }
};
class c:public b{
    public:
    c(){
        cout<<"constructor of C"<<endl;
    }
    ~c(){
        cout<<"destructor of c"<<endl;
    }
};
int main(){
    c ob1;
};
