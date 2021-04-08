/* 
Q.2. Create a class Time which contains data members as: Hours, Minutes and
Seconds. Write C++ program to perform following necessary member
functions:
i. To read time
ii. To display time in format like: hh:mm:ss
iii. To add two different times (Use Objects as argument)       */


#include<iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;
    public : 
        void getTime(void);
        void putTime(void);
        void addTime(Time T1, Time T2);
};

void Time :: getTime(void)
{
    cout << "\nEnter time here : ";
    cout << "\nHours : "; cin >> hours;
    cout << "Minutes : "; cin >> minutes;
    cout << "Seconds : "; cin >> seconds;
    cout << "Time : " << hours <<":" << minutes << ":" << seconds << ":" << endl;
}

void Time :: putTime(void)
{
    cout << "\nTime after addition : ";
    cout << hours << ":" << minutes << ":" << seconds << ":" << endl;
}

void Time :: addTime(Time T1, Time T2)
{
    this-> seconds = T1.seconds + T2.seconds;
    this-> minutes = T1.minutes + T2.minutes + this-> seconds/60;
    this-> hours = T1.hours + T2.hours + this-> minutes/60;
    this-> minutes %= 60;
    this-> seconds %= 60; 
}

int main(void)
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1, T2);
    T3.putTime();

    return 0;
}