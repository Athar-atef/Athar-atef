#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time
{
    public:
        Time();
        Time(int hour, int minute, string daynight);
        friend istream& operator>> (istream& in, Time& time);  ///to perform input operator to objects
        friend ostream& operator<< (ostream& out,  Time& time);  ///to perform output operator to objects
        Time duration(Time &Start, Time& End); ///function to calculate duration between two times
        ///Some operators overloading to be able to compare two objects
        bool operator< (Time& t);
        bool operator> (Time& t);
        bool operator<= (Time& t);
        bool operator>= (Time& t);
        bool operator== (Time& t);
        bool operator!= (Time& t);

        virtual ~Time();

    protected:

    private:
         int hour, minute;
         string daynight;
};

#endif // TIME_H
