/*  Q.1  Write a C++ program to read two float numbers. 
Perform arithmetic binary operations like +, - , *, / on these 
numbers using Inline Function. Display resultant value with a
 precision of two digits. */

#include <iostream>
#include <stdio.h>
using namespace std;

inline float add(float a, float b)
{
    return a+b;
}
inline float sub(float a, float b )
{
    return a-b;
}
inline float mult(float a, float b)
{
    return a*b;
}
inline float dev(float a, float b)
{
    return (a/b);
}



int main(void)
{
    float a, b, ad, sb, multi, divi = 0;
    cout << "\n************* Arithmetic Operations **************** " << endl;
    cout << "\nEnter value of 'a' and 'b' ";
    cout << "\nEnter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "\n************************************ \n";

    ad = add(a, b);
    sb = sub(a, b);
    multi = mult(a, b);
    if (b == 0)
    {
        cout << "\nDivision not possible : ";
    }
    else
    divi = dev(a, b);
    cout.precision(2);
        cout << "Addition : " << ad << endl << "Substraction : " << sb << endl << "Multiplication : " << multi << endl << "Division : " << divi;
        getc;

    return 0;
}