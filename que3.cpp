
#include<iostream>
#include<conio.h>
using namespace std;
class Cube
{
  private:
     int c;
     int Volume;
  public:
     Cube()
     {
       c=0;
       cout<<"Default Constructor Called "<<endl;
     }
     Cube(int x)
     {
       c=x;
       cout<<"Parameterized Constructor Called "<<endl;
     }
     void calculateVolume()
     {
       Volume=c*c*c;
     }
     void showData()
     {
       cout<<"Volume Of Cuboid is "<<Volume<<endl<<endl;
     }

};

int main()
{
  Cube c1(5);
  Cube c2;

  c1.calculateVolume();
  c1.showData();

  c2.calculateVolume();
  c2.showData();
  getch();
  return 0;
}