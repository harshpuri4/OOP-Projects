/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_NAMETAG_H_
#define SDDS_NAMETAG_H_
#include<iostream>
using namespace std;

namespace sdds
{
    class NameTag
    {
    private:
        char name[51];
    public:
        void set(const char* name);
        char* getName()
        {
            return this->name;
        }
        void print();
        void print(int size);
    };
}
#endif
