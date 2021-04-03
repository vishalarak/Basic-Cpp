/*
    6. Create a base class Student(Roll_No, Name, Class) which derives 
    two classes Internal_Marks(IntM1, IntM2, IntM3, IntM4, IntM5)
    and External_Marks(ExtM1 ExtM2, ExtM3, ExtM4, ExtM5).
    Class Result(T1, T2, T3, T4, T5) inherits both Internal_Marks and 
    External_Marks classes. (Use Virtual Base Class) */


#include<iostream>
using namespace std;
class stu
{
   public:
   int rno;
   char name[10]; //name=student name , rno= roll no
   void accept()
   {
      cout<<"Enter Roll no: ";
      cin>>rno;
      cout<<"\nEnter student name: ";
      cin>>name;
   }
};
class ac: public stu // inherit class  ac 
{
   protected:
   int m1,m2,m3; //m1=marks1 , m2=marks2 , m3=marks3 
   public:
   void acc()
   {
      cout<<"Enter marks in 1 subject: ";
      cin>>m1;
      cout<<"Enter marks in 2 subject: ";
      cin>>m2;
      cout<<"Enter marks in 3 subject: ";
      cin>>m3;1
   }
};
class ec: public ac // inherit class ec 
{
   protected:
   int m4; //m4=marks4
   public:
   void acce()
   {
   	cout<<"Enter extra curricular activities: ";
        cin>>m4;
   }

};
class result: public ec // inherit class result 
{
   public:
   int m;
   void cal()
   {
   m=m1+m2+m3+m4; //calculating marks
   cout<<"Total Marks: "<<m<<endl<<"Grade      : ";
   if(m>75)
       cout<<"A grade"<<endl;
   else if(m>65)
       cout<<"B grade"<<endl;
   else if(m>45)
       cout<<"C grade"<<endl;
   else if(m>35)
       cout<<"pass"<<endl;
   else if(m>0)
       cout<<"Fail"<<endl;
   }
};
int main(void)
{
	int ch;
   result s1; //instance of class result

   cout<<endl;
   do
   {
      cout<<"\n1.build a report"<<endl;
      cout<<"2.calculate marks and grade: "<<endl;
      cout<<"3.Exit: "<<endl;
      cout<<"\nchoose one: ";
  		 cin>>ch;
  		 cout<<endl;
   switch(ch)
   {

   	case 1:
             s1.accept();
             s1.acc();
             s1.acce();break;
         case 2:
             s1.cal(); break;
   }

   }while(ch!=3);
   return 0;
}