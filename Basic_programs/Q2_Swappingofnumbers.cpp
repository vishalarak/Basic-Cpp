/* Q.2 Write a C++ program to create two classes Class1 and Class2. Each class
contains one float data member. Write following functions:
iii. To accept float numbers
iv. To display float numbers in right justified format with precision of two digits
To Exchange the private values of both these classes by using Friend function */

#include<iostream>
#include<iomanip>
using namespace std;

class clss2;
class clss1
{
    float a1;
    public :
    void get()
    {
        cout << "\nEnter first number : " ; 
        cout <<"\n A : "; cin >> a1;
    }
    void disp()
    {
        cout.setf(ios::left, ios ::adjustfield);
        cout.width(20);
        cout << "\nA : " << a1;
    }

    friend void swap(clss1 &, clss2 & );
};

class clss2 
{
    float a2;
    public : 
    void get()
    {
        cout << "\nEnter second number : ";
        cout << "\nA2 : "; cin >> a2;
    }
    void disp()
    {
        cout.setf(ios ::left, ios :: adjustfield);
        cout.width(20);
        cout << "\nA2 : " << a2;
    }
    friend void swap(clss1 &, clss2 &);
};

void swap(clss1 & ob1, clss2 & ob2)
{
    float temp;
    temp = ob1.a1;
    ob1.a1 = ob2.a2;
    ob2.a2 = temp;
}

int main(void)
{
    clss1 ob1;
    clss2 ob2;
    ob1.get();
    ob2.get();
    ob1.disp();
    ob2.disp();
    swap(ob1, ob2);
    cout<< "\nAfter swapping : ";
    ob1.disp();
    ob2.disp();
    getc;
    return 0;
}
