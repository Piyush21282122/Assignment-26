
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    private:
       int Roll_no;
       string name;
       int semister;
    public:
       Student()
       {
         cout<<"\n----------------------------\n";
         cout<<"Enter the student Roll_no  : "<<endl;
         cin>>Roll_no;
         cout<<"Enter the Student name     : "<<endl;
         cin>>name;
         cout<<"Enter the Student Semiseter : "<<endl;
         cin>>semister;

         cout<<"Default Constructor called "<<endl;
       }
       void displayDetails()
       {
         cout<<"\n-------------------\n";
         cout<<"\n Student Roll_no :"<<Roll_no;
         cout<<"\n Student Name    :"<<name;
         cout<<"\n Student Semister:"<<semister;
       }

};


int main()
{
    Student s1;
    Student s2;

    s1.displayDetails();
    s2.displayDetails();

    getch();
    return 0;
}
