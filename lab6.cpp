#include <iostream>

using namespace std;

class Time
{
    private:
        int thrs, tmins, tsec;
    public:
        void setHours(int hrs)
        void setMinutes(int mins)
        void setSeconds(int secs)
        void Display12(Time &)
        void Display24(Time &)
        Time(int h, int m, int s)
        {
            thrs = h;
            tmins = m;
            tsec = s;
        }
        int getHours()
        {
            return thrs;
        }
        int getMinutes()
        {
            return tmins;
        }
        int getSeconds()
        {
            return tsecs;
        }
        void setHours(int h)
        {
            thrs = h;
        }
        void setMinutes(int m)
        {
            tmins = m;
        }
        void setSeconds(int s)
        {
            tsecs = s;
        }


};

void Display12(&time &myt1)
{
    char chr;
    if (h > 12)
    {
        h = h - 12;
        chr = 'P';
    } 
    else
    {
        chr = 'A';
    }

}
void Display24(&time &myt1)
{
    cout << myt1.getHours() << "." << myt1.getMinutes() << "." << myt1.getSeconds()
}       
int main()
{
    Time myT1;
    int thrs, tmins, tsec;
    cout <<"Enter hours: ";
    cin >> thrs;
    cout <<"Enter minutes: ";
    cin >> tmins;
    cout << "Enter seconds: ";
    cin >> tsec;
}




    