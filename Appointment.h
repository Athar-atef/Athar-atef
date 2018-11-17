#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <Time.h>
#include <iostream>
using namespace std;

class Appointment
{
    public:
        Appointment();
        Appointment(Time Start, Time End);
        friend istream& operator>> (istream& in, Appointment& appointment);  ///to perform input operator to objects
        friend ostream& operator<< (ostream& out, Appointment& appointment);  ///to perform output operator to objects
        bool operator<= (Appointment& a);
        bool operator>= (Appointment& a);
        bool operator< (Appointment& a);
        bool operator> (Appointment& a);
        bool operator== (Appointment& a);
        bool operator!= (Appointment& a);
        bool overlap(Appointment a);         ///function to check if two appointments are in the same time


        virtual ~Appointment();

    protected:

    private:
         Time Start;
         Time End;
};

#endif // APPOINTMENT_H
