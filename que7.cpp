
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
    private:
       int length;
       int breadth;
       int height;
       int volume;
    public:
       Box(int l,int b,int h)
       {
         length=l;
         breadth=b;
         height=h;

         cout<<"Default constructor Called"<<endl;
       }
       void calculateVolumeBox()
       {
         volume = length*breadth*height;
       }
       void displayData()
       {
         cout<<"\n_________________________\n";
         cout<<"Volume Of Box is "<<volume<<endl;
       }
};

int main()
{
    Box b1(10,20,30);

    b1.calculateVolumeBox();
    b1.displayData();

    Box b2(50,60,70);

    b2.calculateVolumeBox();
    b2.displayData();
    getch();
    return 0;
}