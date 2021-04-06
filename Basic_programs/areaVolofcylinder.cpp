// Q. 1 Area & Volume of the cylinder  using inline function : 


#include<iostream>
#include<stdio.h>
using namespace std;

class Cylinder
{
    float r,  h;

public :
    inline void area(float , float);
    inline void volume(float, float);
};

inline void Cylinder :: area(float r, float h)
{
    cout << "\nArea of the cylinder : "<< 2 * 3.14 * (r * r) + h * (2* 3.14*r) << endl;
}

inline void Cylinder :: volume(float r, float h)
{
    cout << "\nVolume of te cylinder : "<< 3.14 * r * r * h << endl;
}

int main(void)
{
    float r, h;
    Cylinder c;
    cout << "\nEnter the radius & height of the cylinder : " << endl << endl;
    cout << "Enter the radius : ";
    cin >> r;
    cout << "Enter the height : ";
    cin >> h ;

    c.area(r,h);

    cout << "\n----------------------------------------\n";
    cout << "Enter the radius : ";
    cin >> r;
    cout << "Enter the height : ";
    cin >> h ;

    c.volume(r,h);

    return 0;
}