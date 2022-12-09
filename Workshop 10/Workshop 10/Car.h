/*
Workshop 10
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#ifndef SDDS_CAR_H_
#define SDDS_CAR_H_
#include <iostream>
#include "ReadWrite.h"
namespace sdds {
   class Car : public ReadWrite {
      char _plate[9];
      char _makeModel[41];
   public:
      Car(const char* plate = "", const char* makeModel = "");
      void set(const char* plate, const char* makeModel);
      std::ostream& display(std::ostream& os)const;
      std::istream& read(std::istream& is);
      bool operator==(const char* mmSubstr)const;
   };


}
#endif // !SDDS_CAR_H_