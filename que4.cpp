
#include<iostream>
#include<conio.h>
using namespace std;
class Counter
{
  private:
     static int count;
  public:
     Counter()
     {
       count++;
     }
     int getCount()
     {
       return count;
     }
};

int Counter:: count;
int main()
{
  Counter c1;

  cout<<"Count Value is "<<c1.getCount()<<endl;
  
  Counter c2;

  cout<<"Count value is "<<c2.getCount()<<endl;
  getch();
  return 0;
}