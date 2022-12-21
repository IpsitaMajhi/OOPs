#include<iostream>
using namespace std;
class dist
{
    int feet;
    int inches;
    int value;
    public :
    dist (int p , int q , int r)
    {
        feet=p;
        inches = q;
        value = r;
    } 
    void display()
    {
        cout<<feet<<""<<inches<<endl;

    }
    dist operator + (dist ob)
    {
        dist temp(0,0,0);
        temp.feet = feet + ob.feet;
        temp.inches = inches + ob.inches;
        temp.value = value + ob.value;
        return temp;
    }
    
};

    int main()
{
    dist ob1 (2,3,4);
    dist ob2 (3,4,5);
    dist ob3  (0,0,0);
    ob2 = ob3 + ob1;
    ob2.display();
}


