

#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    private:
       int a;
       int b;
    public:
       void setData(int num1,int num2)
       {
          a=num1;
          b=num2;
       }
       void showData()
       {
          cout<<"real = "<<a<<" img = "<<b;
          cout<<endl;
       }
       Complex add(Complex c)
       {
          Complex temp;
          temp.a=a+c.a;
          temp.b=b+c.b;
          return temp;
       }

};

int main()
{
    Complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(10,20);

    c3=c1.add(c2);
    
    c3.showData();
    getch();
    return 0;
}