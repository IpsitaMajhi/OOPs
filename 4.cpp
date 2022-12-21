#include<iostream>
using namespace std;
class dist
{ 
    int km;
    int meter;
public :

 dist ()
{   cout<<"Enter the values"<<endl;
    cin>>km>>meter;
    }


dist(int km , int meter)
{
    this -> km = km;
    this -> meter = meter;

}
void add (dist a)
{
    cout<<"Add the distances "<< a.km + this -> km << endl;
    cout << "Add the meter " <<a.meter + this -> meter << endl;

}
};
int main ()
{
    dist d1,d2;
    d1.add(d2);
}