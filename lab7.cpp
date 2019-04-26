
#include <iostream>
using namespace std;

class Time
{
public:
   int h;
   int m;
   int s;

   Time(int h, int m, int s)
   {
       if (h < 0 || h> 24)
       {
           throw "HourException";
       }
       else if (m < 0 || m>60)
       {
           throw "MinuteException";
       }
       else if (s < 0 || s>60)
       {
           throw "SecondException";
       }
       else
       {
           this->h = h;
           this->m = m;
           this->s = s;
       }

   }

   void Display12()
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
       printf("\nThe time is : %02d:%02d.%02d %cM ", h, m, s,chr);
   }

   void Display24()
   {
       printf("\n\nThe time is : %02d:%02d.%02d ",h,m,s);
   }

};


int main() {
   int x = 50;
   int y = 0;
   double z = 0;

   try
   {
       Time time(15, 30, 45);
       time.Display24();
       time.Display12();
   }
   catch (char* msg)
   {
       cerr << msg << endl;
   }

   return 0;
}






