/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_CC_H
#define SDDS_CC_H

namespace sdds {
    const int MIN_CHAR = 2;
    const unsigned long long MIN_CARNUM = 4000000000000000;
    const unsigned long long MAX_CARNUM = 4099999999999999;
    const int MIN_CVV = 100;
    const int MAX_CVV = 999;
    const int MIN_EXPMON = 1;
    const int MAX_EXPMON = 12;
    const int MIN_EXPYEAR = 22;
    const int MAX_EXPYEAR = 32;

    class CC {
        char* name;
        short cvv;
        short expMon;
        short expYear;
        unsigned long long cardNo;

        bool validate(const char* name, unsigned long long cardNo, short cvv, short expMon, short expYear) const;
        void prnNumber() const;

    public:
        void set();
        void cleanUp();
        bool isEmpty() const;
        void set(const char* cc_name, unsigned long long cc_no, short cc_cvv, short cc_expMon, short cc_expYear);
        bool read();

        void display(int row = 0) const;

    };
}


#endif // !SDDS_CC_H