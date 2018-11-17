#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
    hour = 0 ;
    minute = 0;
    daynight="";
}
///*****************************************************
Time::Time(int hour, int minute, string daynight)
{
    this->hour=hour;
    this->minute=minute;
    this->daynight=daynight;
}
///*******************************************************
Time Time:: duration(Time &Start, Time& End)
{
    if(Start.daynight == "AM" && End.daynight == "PM" || Start.daynight == "PM" && End.daynight == "AM")
    {
        hour= (End.hour+12)-Start.hour;
        minute = (60-Start.minute)+End.minute;
        hour--;
        if (minute>=60)
        {
            hour++;
            minute-=60;
        }
    }

    if(Start.daynight == "AM" && End.daynight == "AM" || Start.daynight == "PM" && End.daynight == "PM")
    {
        hour= End.hour-Start.hour;
        minute= Start.minute+End.minute;

        if (minute>=60)
        {
            hour++;
            minute-=60;
        }
    }




}
///********************************************************

bool Time::operator< (Time& t)
{
    if(daynight!=t.daynight)
        return (daynight=="AM");

    if(t.hour!=hour)
    {
        return (hour<t.hour);
    }
    return(minute<t.minute);

}
///******************************************
bool Time::operator<= (Time& t)
{
    if(daynight!=t.daynight)
        return (daynight=="AM");

    if(t.hour!=hour)
    {
        return (hour<=t.hour);
    }
    return(minute<=t.minute);

}
///**********************************************
bool Time::operator> (Time& t)
{
    if(daynight!=t.daynight)
        return (daynight=="PM");
    if(t.hour!=hour)
    {
        return (hour>t.hour);
    }
    return(t.minute<minute);
}
///**********************************************
bool Time::operator>= (Time& t)
{
    if(daynight!=t.daynight)
        return (daynight=="PM");
    if(t.hour!=hour)
    {
        return (hour>=t.hour);
    }
    return(t.minute<=minute);
}
///**********************************************
bool Time::operator== (Time& t)
{
    return (daynight==t.daynight && hour==t.hour && minute==t.minute);

}
///********************************
bool Time::operator!= (Time& t)
{
    return (daynight!=t.daynight || hour!=t.hour || minute!=t.minute);
}
istream& operator>> (istream& in, Time& time)
{

    in>>time.hour ;
    in>> time.minute ;
    in>> time.daynight;
    return in;
}


ostream& operator<< (ostream& out, Time& time)
{
    if (time.hour<10)
    {
        out << "0";
    }
    out << time.hour;
    out << ":";
    if (time.minute<10)
    {
        out << "0";
    }

    out << time.minute;
    out << time.daynight;
    return out;
}

Time::~Time()
{
    //dtor
}
