#ifndef DAYAPPOINTMENT_H
#define DAYAPPOINTMENT_H
#include <Appointment.h>
#include <iostream>
using namespace std;

class DayAppointment
{
    public:
        friend istream& operator>> (istream& in, DayAppointment& dayappointment);  ///to perform input operator to objects
        friend ostream& operator<< (ostream& out, DayAppointment dayappointment);  ///to perform output operator to objects
        friend istream& operator>> (istream& in, Appointment& appointment);   ///to perform input operator to objects
        DayAppointment();   ///default constructor
        DayAppointment(string weekDay, int numOfAppointments, Appointment * appointments );   ///parameterized constructor
        DayAppointment(DayAppointment& a);      ///copy constructor

        DayAppointment operator=(DayAppointment& a);    ///equal operator (shallow copy)
        bool operator==(DayAppointment& a);
        bool operator!=(DayAppointment& a);
        Appointment operator[]( int index);
        ~DayAppointment();


    protected:

    private:
        Appointment * appointments;
        int numOfAppointments;
        string weekDay;
};

#endif // DAYAPPOINTMENT_H
