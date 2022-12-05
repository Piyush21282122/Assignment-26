
#include<iostream>
#include<conio.h>
using namespace std;
class staticCount 
{
    private:
       static int count;
    public:
        staticCount()
        {
            count=0;
        }
        static void increCount()
        {
            count++;
        }
        static void displayCount()
        {
            cout<<"Count Value is "<<count<<endl<<endl;
        }
};
int staticCount::count=0;
int main()
{
    staticCount::increCount();
    staticCount::increCount();
    staticCount::increCount();

    staticCount::displayCount();
    getch();
    return 0;
}