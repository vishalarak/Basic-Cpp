// Area of circle, triangle and rectangle using funtion overloading.
// Program should be menu driven

#include <iostream>
#include <cstdlib>
using namespace std;

float area(float r)
{
    return (3.14 * r * r);
}
float area(float bs, float h)
{
    return (0.5 * bs * h);
}

int area(int l, int b)
{
    return (l * b);
}

int main()
{
    float bs, h, r;
    int l, b, ch;
    do
    {
        cout << "***** Menu ***** " << endl
             << endl;
        cout << "1. Area of Circle : " << endl;
        cout << "2. Area of Triangle : " << endl;
        cout << "3. Area of Rectangle : " << endl;
        cout << "4. Exit. " << endl
             << endl;
        cout << "Enter your choice. " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter radius of the circle = " << endl;
            cin >> r;
            cout << "Area of circle is = " << area(r) << endl
                 << endl;
            break;
        }
        case 2:
        {
            cout << "Enter the base and height of triangle = " << endl;
            cin >> bs >> h;
            cout << "Area of triangle is = " << area(bs, h) << endl
                 << endl;
            break;
        }
        case 3:
        {
            cout << "Enter length and breadth of rectangle = " << endl;
            cin >> l >> b;
            cout << "Area of rectangle is = " << area(l, b) << endl
                 << endl;
            break;
        }
        case 4:
            exit(0);
        default:
            cout << "Invalid Choice..." << endl;
        }

    } while (ch != 4);
    return 0;
}
