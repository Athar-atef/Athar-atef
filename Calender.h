#ifndef CALENDER_H
#define CALENDER_H
#include <DayAppointment.h>

class Calender
{
    public:
        Calender();
        void setArray_Size(int numOfDays, DayAppointment * arr);       ///setter to full the array and take its size

        virtual ~Calender();

    protected:

    private:
        DayAppointment * days;
        int numOfDays;
};

#endif // CALENDER_H
