#include "Calender.h"
#include "DayAppointment.h"

Calender::Calender() {}
void Calender::setArray_Size(int numOfDays, DayAppointment * arr){
    this->numOfDays = numOfDays;
    days = new DayAppointment[numOfDays];
    for(int i=0; i<numOfDays; i++){
        days[i]=arr[i];
    }
}



Calender::~Calender()
{
    //dtor
}
