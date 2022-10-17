/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_TOURBUS_H_
#define SDDS_TOURBUS_H_
#include<iostream>
#include "TourTicket.h"

namespace sdds
{
    class TourBus
    {
    private:
        TourTicket* tickets;
        int noOfPassengers;
    public:
        bool boarded;
        TourBus(const int noOfPassengers);
        ~TourBus();
        int getNoOfPassengers();
        bool validTour() const;
        const TourBus& board();
        void startTheTour() const;
    };
};

#endif
