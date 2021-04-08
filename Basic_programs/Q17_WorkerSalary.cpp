/* 
    Q.17   Write a C++ program to create a class Worker with data members as
Worker_Name, No_of_Hours_worked, Pay_Rate. Write necessary member
functions to calculate and display the salary of worker. (Use default value for
Pay_Rate)                                                                   */


#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Worker
{
    int hrs, salary, pay_rate;
    char wname[20];

    public : 

        void calSal(int pay_rate = 200)
        {
            cout << "\nEnter name : "; cin >> wname;
            cout << "Hours of working : "; cin >> hrs;
            
            salary = hrs * pay_rate;
            cout << "\nName : " << wname << endl;
            cout << "Hours of working : " << hrs << endl;
            cout << "The salary : " << salary << "/-" << endl << endl;
        }
};

int main(void)
{
    Worker w;
    w.calSal();
    return 0;
}