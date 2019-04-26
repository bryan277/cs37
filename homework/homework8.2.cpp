#include <iostream>
using namespace std;

class Date
{
    private:
        int dom;
        int month;
        int year;

    public:
        //Default constructor
        Date()
        {
            dom = 0;
            month = 0;
            year = 0;
        }
        //constructor of the form Date(int, int, int)
        Date(int dom,int month,int year)
        {
            this->dom = dom;
            this->month = month;
            this->year = year;
        }
        //Get day
        int getDay()
        {
            return dom;
        }
        //Get month
        int getMonth()
        {
            return month;
        }
        //Get year
        int getYear()
        {
            return year;
        }
};

class Time
{
    private:
        int hour,minute,second;

    public:
        //Default constructor
        Time()
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        //Constructor of the Time(int, int, int)
        Time(int hour,int minute,int second)
        {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        //Get hour
        int getHour()
        {
            return hour;
        }
        //Get minute
        int getMinute()
        {
            return minute;
        }
        //Get second
        int getSecond()
        {
            return second;
        }
};

class Event
{
   private:
        string description;
        Date date;
        Time tm;
  
   public:
        //Constructor for Event(string, int, int, int, int, int)
        Event(string description, int dom, int month, int year, int hour, int minute, int second)
        {
            this->description = description;
            Date date(dom,month,year); // creates object date with arguments
            this->date = date;          
            Time tm(hour,minute,second);
            this->tm = tm;
        }
        //Constructor for Event(strig, Date, Time)
        Event(string description, Date date, Time tm)
        {
            this->description = description;
            this->date = date;
            this->tm = tm;
        }
    //ostream operator
   friend ostream& operator<<( ostream &output, Event &E );
};

//ostream operator
ostream& operator<<( ostream &output, Event &E ) {
output << "\n"<<E.description << " on date : " << E.date.getDay()<<"/"<<E.date.getMonth()<<"/"<<E.date.getYear()<<" at Time : "<<E.tm.getHour()<<":"<<E.tm.getMinute()<<":"<<E.tm.getSecond();
return output;
}   

int main() {
  
   string description;
   int day,month,year,hour,minute,second;
  
   //prompt user for name, day, month, year, hour, minute, second
   cout<<"Enter event name : " << endl;
   cin>>description;
   cout<<"Enter day,month and year : " << endl;;
   cin>>day>>month>>year;
   cout<<"Enter hour, minute and second : " << endl;
   cin>>hour>>minute>>second;
     
   Event eventOne(description,day,month,year,hour,minute,second);
   cout << eventOne << endl; //info for event1 object
     
   Date d(3,13,2019);
   Time tm(12,1,1);
   Event eventTwo("Exam date: ",d,tm);
  

cout << eventTwo << endl; // info for event2 object
   return 0;
}

// Enter event name : 
// hans 
// Enter day,month and year : 
// 1 1 2019
// Enter hour, minute and second : 
// 1 1 1

// hans on date : 1/1/2019 at Time : 1:1:1

// Exam date:  on date : 3/13/2019 at Time : 12:1:1