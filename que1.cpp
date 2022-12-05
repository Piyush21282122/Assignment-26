
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
   private:
      int a; // contains real part
      int b; // contains Imaginary part
   public:
      void setData(int r,int i)
      {
         a=r;
         b=i;
      }
      void showData()
      {
         cout<<"Real="<<a<<" Imaginary="<<b<<endl;
      }
      Complex add(Complex C) // Add To Complex Type Values 
      {
         Complex temp;

         temp.a=a+C.a;
         temp.b=b+C.b;

         return temp;
      }
};

int main()
{
   Complex c1,c2;
   Complex c3;

   c1.setData(10,22);
   c2.setData(20,33);

   c3=c1.add(c2);

   c1.showData();
   c2.showData();
   c3.showData();
   getch();
   return 0;
}