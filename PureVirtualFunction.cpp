/*
    5.Create a base class Shape. Derive three different classes Circle, 
    Rectangle and Triangle from Shape class.
    Write a C++ program to calculate area of Circle, Rectangle and 
    Triangle. (Use purevirtual function).               */

#include<iostream>
using namespace std;

class shape
{
    public :
    virtual void area() = 0;    //pure virtual function
};

class circle : public shape 
{
    float r; 
    public : 
    void area()
    {
        cout<<"\n Enter the radius : ";
        cin>>r;
        cout<<"\n Area of the circle : "<<(2.146*r*r);
    }
};

class rectangle : public shape
{
    int l, b;
    public :
    void area()
    {
        cout<<"\n Enter Length and Breadth : ";
        cin>>l>>b;
        cout<<"\n Area of rectangle : "<<l*b;
    }
};

class triangle : public shape
{
    int h, b;
    float a;
    public :
    void area()
    {
        cout<<"\n Enter the height and breadth : ";
        cin>>h>>b;
        a = 0.5*h*b;
        cout<<"\n Area of triangle : "<<a;
    }
};

int main(void)
{
    circle c;
    c.area();
    rectangle r;
    r.area();
    triangle t;
    t.area();
    getc;
    return 0;
}