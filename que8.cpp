
#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
    private:
       int principal;
       float RateOfInterest;
       int year;
       float simpleInterest;
    public:
        Bank()
        {
            principal=0;
            RateOfInterest=0;
            year=0;
        }
        void setData(int p,int r,int y)
        {
            principal=p;
            RateOfInterest=r;
            year=y;
        }
        void inputData()
        {
            cout<<"--------------------------------\n";
            cout<<"Enter the Pricipal         :"<<endl;
            cin>>principal;
            cout<<"Enter the Rate Of Interest :"<<endl;
            cin>>RateOfInterest;
            cout<<"Enter the Year             :"<<endl;
            cin>>year;
        }
        void showSimpleInterest()
        {
            cout<<endl<<"Simple Interest is :"<<simpleInterest<<endl;
        }
        void calculateSimpleInterest()
        {
            simpleInterest=(principal*RateOfInterest*year)/100.0;
        }
};


int main()
{
    Bank b1,b2;

    b1.setData(1000,5,3);
    b1.calculateSimpleInterest();
    b1.showSimpleInterest();

    b2.inputData();
    b2.calculateSimpleInterest();
    b2.showSimpleInterest();
    getch();
    return 0;
}