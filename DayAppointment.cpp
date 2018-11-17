#include "DayAppointment.h"
#include <iostream>
using namespace std;

DayAppointment::DayAppointment()
{
    numOfAppointments = 0;
    weekDay = "";
}
DayAppointment::DayAppointment(string weekDay, int numOfAppointments, Appointment * appointments)
{
    this->numOfAppointments = numOfAppointments;
    this->weekDay = weekDay;
    appointments = new Appointment[numOfAppointments];

    for(int i = 0; i < numOfAppointments; ++i)
    {
        cin >> appointments[i];
        for(int j = 0; j < i; j++){
        if(appointments[i].overlap(appointments[j]))
        {
          i--;
          break;
        }
    }
    }
}
DayAppointment::DayAppointment(DayAppointment& a)
{
    numOfAppointments = a.numOfAppointments;
    weekDay = a.weekDay;
    appointments = new Appointment[numOfAppointments];
    for(int i = 0; i < numOfAppointments; ++i)
    {
        appointments[i] = a.appointments[i];
    }
}


DayAppointment DayAppointment::operator=(DayAppointment& a)
{
    numOfAppointments = a.numOfAppointments;
    weekDay = a.weekDay;
    appointments = new Appointment[numOfAppointments];
    for(int i = 0; i < numOfAppointments; ++i)
    {
        appointments[i] = a.appointments[i];
    }
}

bool DayAppointment::operator==(DayAppointment& a)
{
    if(weekDay==a.weekDay && numOfAppointments==a.numOfAppointments )
    {
        int cnt=0;
        for (int i=0; i<numOfAppointments ;++i){
            if(appointments[i]== a.appointments[i])
                cnt++;
            }
            if (cnt==numOfAppointments){
                return true;
            }
    }
    return false;
}
bool DayAppointment::operator!=(DayAppointment& a)
{
    if(weekDay!=a.weekDay || numOfAppointments!=a.numOfAppointments)
        return true;
    else if(weekDay==a.weekDay && numOfAppointments==a.numOfAppointments){
        int cnt=0;
        for(int i=0; i<numOfAppointments; ++i){
            if(appointments[i]!= a.appointments[i])
                return true;
            else if(appointments[i]== a.appointments[i])
                cnt++;
        }
        if (cnt==numOfAppointments)
            return false;
        else
            return true;
    }
}
Appointment DayAppointment:: operator[]( int index){
    return appointments[index];
}


DayAppointment::~DayAppointment()
{
    delete[]appointments;
}
istream& operator>> (istream& in, DayAppointment& dayappointment){
    cout << "enter number of appointments: ";
    in >> dayappointment.numOfAppointments;
    cout << "\nenter weekday: ";
    in >> dayappointment.weekDay;
    dayappointment.appointments = new Appointment[dayappointment.numOfAppointments];
    for (int i=0; i<dayappointment.numOfAppointments; ++i){
        cout << "\nenter appointment"<< i+1 << ": ";
        in >> dayappointment.appointments[i];
        for(int j = 0; j < i; j++){
        if(dayappointment.appointments[i].overlap(dayappointment.appointments[j]))
        {
          i--;
          break;
        }
    }

}
}
ostream& operator<< (ostream& out, DayAppointment dayappointment){
    out << dayappointment.numOfAppointments << " ";
    out << dayappointment.weekDay << " ";
    for (int i=0; i<dayappointment.numOfAppointments; ++i){
        out << dayappointment.appointments[i];
    }
    return out;
}
