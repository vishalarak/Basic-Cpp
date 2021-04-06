/* 
 8.  Write a C++ program to create a class Student which contains 
data members as Roll Number, Stud Name, and Percentage. 
Write member functions to accept Student information. 
Display all details of student along with a class obtained
depending on percentage. (Use array of objects)             */



#include <iostream>
using namespace std;

#define MAX 10

class students
{
    private : 
        char sname[20];
        int rollno, total, perc;

    public : 
        void accept(void);
        void display(void);
};

void students :: accept(void)
{
    cout << "\nEnter roll no. : "; cin >> rollno;
    cout << "Enter name : "; cin >> sname;
    cout <<  "Enter total marks : "; cin >> total;
    perc = (float)total / 500*100 ; 
}
void students :: display(void)
{
    cout << "\nRoll No. : "<< rollno << "\nName : "<< sname <<"\nTotal : "<< total <<"\nPercentage : "<<perc<< endl;
}

int main(void)
{
    int n, i;
    students std[MAX];
    cout << "\n******************* STUDENT MARKS *********************\n";
    cout << "\nEnter no of entries you want to make : ";
    cin >> n;

    for ( i = 0; i < n; i++)
    {
        cout << "\nEnter the details of the student(s) : " << i + 1 << endl;
        std[i].accept();
    }
    
    for ( i = 0; i < n; i++)
    {
        cout << "\nDetails of the students : " << i + 1 << endl;
        std[i].display();
    }
    return 0;
}