#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area() = 0;
    
};
class Square:public shape
{
    int l;
    public:
    Square(int x)
    {
        l=x;
    }
    void area()
    {
        cout<<"area of square is "<<l*l<<endl;
    }
};
class triangle:public shape
{
    int b,h;
    public:
    triangle(int x,int y)
    {
        b=x;
        h=y;
    }
    void area()
    {
        cout<<"area of triangle is "<<0.5*b*h<<endl;
    }
};
class circle :public shape
{
    int r;
    public :
    circle(int x)
    {
        r = x;
    }
    void area()
    {
        cout<<"area of circle is "<< 3.14*r*r<<endl;
    }

};
int main()
{
    shape *s;
    Square ob1(5);
    triangle ob2(5,6);
    circle ob3 (5);
    s = &ob1;
    s->area();
    s = &ob2;
    s->area();
    s = &ob3;
    s->area();
    return 0;

}
