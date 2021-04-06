/*   
    6.  Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following
member functions:

        i. To accept ‘n’ College details
        ii. To display College details of a specified University
        iii. To display College details according to a specified
        establishment year
 (Use Array of Object and Function overloading) 

*/


#include<iostream>
#include<string.h>
using namespace std;

class College 
{
    int n, id, eyr;
    char cname[20], uname[20]; 

public: 
    
    void accept()
    {
        cout << "\nEnter Id :";
        cin >> id;
        cout << "Enter college name : ";
        cin >> cname;
        cout << "Establishment year : ";
        cin >> eyr;
        cout << "University name : ";
        cin >> uname;
    }

    void display()
    {
        cout << "\nID : " << id << "\nCollege : " << cname << "\nEstablished year : " << eyr <<"\nUniverssity : " << uname << endl;
    }

    int display(char unin[])
    {
        if(strcmp(uname, unin) == 0)
        {
            display();
            return 1;
        }
        else 
            return 0;
    }

    int display(int year)
    {
        if(eyr == year)
        {
            display();
            return 1;
        }
        else
            return 0;
    }
};

int main(void)
{
    int n, eyr, i, a, cnt;
    College collg[20];
    char uni[20];

    cout << "\nEnter number of colleges : ";
    cin >> n;

    for ( i = 0; i < n; i++)
    {
        collg[i].accept();
    }
    for ( i = 0; i < n; i++)
    {
        collg[i].display();
    }

    cout << "\nEnter university name to search : ";
    cin >> uni;
    cnt = 0;
    for ( i = 0; i < n; i++)
    {
        a = collg[i].display(uni);
        if(a == 1)
            cnt ++;
    }
    if ( a == 0)
        cout << "\nUniverrsity name NOT FOUND ! " << endl;

    cout << "\nEnter establishment year to search : ";
    cin >> eyr;

    cnt = 0;
    for(i = 0; i < n; i++)
    {
        a = collg[i].display(eyr);
        if(a==1)
            cnt++;
    }
    if (cnt == 0)
        cout << "\nNOT FOUND !";

    return 0; 
}