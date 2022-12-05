#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    private:
       int hour;
       int minute;
       int second;
    public:
       void setTime(int hour,int minute,int second)
       {
         this->hour=hour;
         this->minute=minute;
         this->second=second;
       }
       void showData()
       {
         cout<<hour<<" hour "<<minute<<" minute "<<second<<" second "<<endl;
       }
       void normalize()
       {
         minute = minute + second / 60;
         second = second % 60;
         hour = hour + minute / 60;
         minute = minute % 60;
       }
       Time add(Time t)
       {
         Time temp;
         temp.second = second + t.second;
         temp.minute = minute + t.minute;
         temp.hour = hour + t.hour;
         temp.normalize();
         return temp;
       }

};

int main()
{
    Time t1,t2;
    Time t3;
    t1.setTime(3,24,45);
    t2.setTime(7,65,70);

    t3 = t1.add(t2);

    t1.showData();
    t2.showData();
    t3.showData();
    getch();
    return 0;
}