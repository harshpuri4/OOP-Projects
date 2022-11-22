/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_Dumper_H
#define SDDS_Dumper_H
#include <iostream>
#include "VehicleBasic.h"
using namespace std;
namespace sdds
{
   class Dumper : public VehicleBasic
   {
   private:
      double d_capacity;
      double d_load; //current cargo
   public:
      Dumper(const char* plate, int year, double capacity, const char* address);
      bool loaddCargo(double cargo);
      bool unloadCargo();
      std::ostream& write(std::ostream& os);
      std::istream& read(std::istream& in);
   };
   std::ostream& operator <<(std::ostream& os, Dumper d);
   std::istream& operator >>(std::istream& in, Dumper& d);

}
#endif
