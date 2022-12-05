

#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
  private:
     int dd;
     int mm;
     int yyyy;
  public:
     Date()
     {
       dd=0;
       mm=0;
       yyyy=0;
       cout<<"Default Constuctor Called "<<endl;
     }
     Date(int d,int m,int y)
     {
       dd=d;
       mm=m;
       yyyy=y;
       cout<<"Parameterized Constructor Called "<<endl;
     }
     void showDate()
     {
       cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl<<endl;
     }

};

int main()
{
  Date d1;

  d1.showDate();

  Date d2(3,12,2002);

  d2.showDate();
  getch();
  return 0;
}