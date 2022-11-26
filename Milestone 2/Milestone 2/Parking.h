/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#ifndef SDDS_PARKING_H
#define SDDS_PARKING_H
#include "Menu.h"

namespace sdds
{
   class Parking
   {
      char* m_fileName;
      Menu* parkingMenu;
      Menu* selectMenu;
      bool isEmpty();
      void parkingStatus();
      void parkVehice();
      void returnVehice();
      void listParkedVehice();
      void findVehice();
      bool closeParking();
      bool exitParking();
      bool loadDataFile();
      void saveDataFile();

   public:
      Parking();
      Parking(const char* fileName);
      ~Parking();
      Parking(const Parking& p) = delete;
      Parking& operator=(const Parking& p) = delete;
      int run();


   };
}

#endif
