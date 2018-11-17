#include "Appointment.h"
#include <iostream>
using namespace std;

Appointment::Appointment() {}
Appointment::Appointment (Time Start, Time End)
{
    this->Start=Start;
    this->End=End;
}

bool Appointment::operator<= (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);

    if (d1<= d2)
        return true;
    else
        return false;
}

bool Appointment::operator>= (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);

    if (d1>= d2)
        return true;
    else
        return false;
}
bool Appointment::operator< (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);

    if (d1> d2)
        return true;
    else
        return false;
}

bool Appointment::operator> (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);
    if (d1> d2)
        return true;
    else
        return false;
}
bool Appointment::operator== (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);

    if (d1== d2)
        return true;
    else
        return false;
}
bool Appointment::operator!= (Appointment& a)
{
    Time d1,d2;
    d1.duration(Start, End);
    d2.duration(a.Start, a.End);

    if (d1!= d2)
        return true;
    else
        return false;
}
bool Appointment::overlap(Appointment a){   ///to check if two appointments are overlapped
    if ((Start>=a.Start &&Start<=a.End) ||(End>=a.Start && End<=a.End)){
        cout << "the two appointments are overlapped\n";
        return true;
    }
    else
        return false;
}
istream& operator>> (istream& in, Appointment& appointment)   ///to perform input operator to objects
{
    in>>appointment.Start ;
    in>> appointment.End ;
    return in;
}

ostream& operator<< (ostream& out, Appointment& appointment)
{
    out << appointment.Start << endl;
    out << appointment.End;
    return out;
}
Appointment::~Appointment()
{
    //dtor
}
