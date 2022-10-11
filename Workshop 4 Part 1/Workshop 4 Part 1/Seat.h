/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_SEAT_H_
#define SDDS_SEAT_H_
#include<iostream>
namespace sdds
{
    class Seat
    {
    private:
        char* seatName;
        int seatRow;
        char seatLetter;
        bool validate(int row, char letter) const;
        Seat& alAndCp(const char* str);
    public:
        Seat& reset();
        bool isEmpty() const;
        bool assigned() const;
        Seat();
        Seat(const char* passengerName);
        Seat(const char* passengerName, int row, char letter);
        ~Seat();
        Seat& set(int row, char letter);
        int row() const;
        char letter() const;
        const char* passenger() const;
        std::ostream& display(std::ostream& coutRef = std::cout) const;
        std::istream& read(std::istream& cinRef = std::cin);
    };
}
#endif // !SDDS_SEAT_H_