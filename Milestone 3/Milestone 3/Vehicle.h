/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#ifndef SDDS_VEHICLE_H
#define SDDS_VEHICLE_H
#include <iostream>
#include "ReadWritable.h"

namespace sdds
{
   const int LP_MAX_LEN = 9;
   const int MM_MAX_LEN = 61;
   const int MINIMUM_VALUE = 1;

   class Vehicle : public ReadWritable
   {
      char* m_licensePlate = nullptr;
      char* m_makeModel = nullptr;
      int m_parkingSpot = 0;
   public:
      Vehicle();
      Vehicle(const char* licensePlate, const char* makeModel);
      Vehicle(const Vehicle& src); //copy from src -> this object
      Vehicle& operator=(const Vehicle& src);
      ~Vehicle();
      void setEmpty();
      bool isEmpty();
      const char* getLicensePlate() const;
      void setLicensePlate(const char* licensePlate);
      const char* getMakeModel() const;
      void setMakeModel(const char* makeModel);
      int getParkingSpot();
      void setParkingSpot(int parkingSpot);
      bool operator == (const char* licensePlate) const;
      bool operator == (const Vehicle& V) const;
      std::istream& read(std::istream& istr = std::cin); //modify object -> cannot push const here
      std::ostream& write(std::ostream& ostr = std::cout)const; //read value and display-> push const here
      virtual std::ostream& writeType(std::ostream& ostr = std::cout)const = 0;
      bool validLicensePlate(const char* licensePlate);
      bool validMakeModel(const char* licensePlate);
      void upperCaseConverter(const char* licensePlate);
   };
}

#endif // !SDDS_VEHICLE_H
