/*      Q3 Create two base classes Learning_Info( Roll_No, Stud_Name, Class,
Percentage) and Earning_Info(No_of_hours_worked, Charges_per_hour). Derive
a class Earn_Learn_info from above two classes. Write necessary member
functions to accept and display Student information. Calculate total money
earned by the student. (Use constructor in derived class).                       */

#include<iostream>
#include<conio.h>
using namespace std;

class learninginfo
{
protected :
    int rollno;
    float perc;
    char sname[20], clss[10];

public :
    void getLearn()
    {
        cout << "\nEnter roll no : "; cin >> rollno;
        cout << "Enter student name : "; cin >> sname;
        cout << "Enter your class : "; cin >> clss;
        cout << "Percentage : "; cin >> perc;
    }
};

class earninfo 
{
protected : 
    int hrs;
    float rate;

public : 
    void getEarn()
    {
        cout << "\nEnter hours of working : "; cin >> hrs;
        cout << "Enter charge rate per hour : "; cin >> rate;
    }
};

class learn_earn : public learninginfo, public earninfo
{
    int s;
    public : 
    learn_earn() : learninginfo(), earninfo()
    {
        cout << "\nRoll no. : " << rollno;
        cout << "\nStudent name : " << sname;
        cout << "\nClass : " << clss;
        cout << "\nPercentage : " << perc ;
        cout << "\nHours of working : " << hrs;
        cout << "\nRate per hour  : " << rate;
    }
    void cal()
    {
        s = 0;                    // s = salary
        s = hrs * rate;
        cout << "\nTotal income : " << s << " Rs.";
    }
} ;

int main (void)
{
    learn_earn le;
    le.getLearn();
    le.getEarn();
    le.cal();
    
    return 0;
}