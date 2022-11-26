/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ostream>
#include <cstring>
#include "Parking.h"
#include "Menu.h"

using namespace std;
namespace sdds
{
   Parking::Parking() {
      m_fileName = nullptr;
      parkingMenu = nullptr;
      selectMenu = nullptr;
   };
   Parking::Parking(const char* fileName) :Parking() {

      loadDataFile();
      if (fileName == nullptr || strcmp(fileName, "") == 0) {
         cout << "Error in data file" << endl;
         m_fileName = nullptr;
      }
      else {
         m_fileName = new char[strlen(fileName) + 1];
         strcpy(m_fileName, fileName);
         if (loadDataFile()) {
            // parking Menu:
            parkingMenu = new Menu("Parking Menu, select an action:");
            parkingMenu->add("Park Vehicle");
            parkingMenu->add("Return Vehicle");
            parkingMenu->add("List Parked Vehicles");
            parkingMenu->add("Find Vehicle");
            parkingMenu->add("Close Parking (End of day)");
            parkingMenu->add("Exit Program");
            // select vehicle Menu:
            selectMenu = new Menu("Select type of the vehicle:", 1);
            selectMenu->add("Car");
            selectMenu->add("Motorcycle");
            selectMenu->add("Cancel");
         }
         else {
            cout << "Error in data file" << endl;
            m_fileName = nullptr;
         }
      }
   };

   Parking::~Parking() {
      saveDataFile();
      if (m_fileName != nullptr) {
         delete[] m_fileName;
         m_fileName = nullptr;
         delete parkingMenu;
         parkingMenu = nullptr;
         delete selectMenu;
         selectMenu = nullptr;
      }

   };

   int Parking::run() {
      bool flag = false;
      if (!isEmpty()) {

         while (!flag) {
            parkingStatus();
            int choice = parkingMenu->run();
            switch (choice) {
            case 1:
               parkVehice();
               break;
            case 2:
               returnVehice();
               break;
            case 3:
               listParkedVehice();
               break;
            case 4:
               findVehice();
               break;
            case 5:
               if (closeParking()) {
                  flag = true;
               }
               break;
            case 6:
               if (exitParking()) {
                  flag = true;
               }
               break;
            }
         }
      }
      if (!isEmpty()) {
         return 1;
      }
      else {
      }
      return 0;
   };

   bool Parking::isEmpty() {
      return m_fileName == nullptr;
   };

   void Parking::parkingStatus() {
      cout << "****** Valet Parking ******" << endl;
   };

   void Parking::parkVehice() {
      int choice = selectMenu->run();
      switch (choice) {
      case 1:
         cout << "---------------------------------" << endl;
         cout << "Parking Car" << endl;
         cout << "---------------------------------" << endl << endl;
         break;
      case 2:
         cout << "---------------------------------" << endl;
         cout << "Parking Motorcycle" << endl;
         cout << "---------------------------------" << endl << endl;
         break;
      case 3:
         cout << "---------------------------------" << endl;
         cout << "Cancelled parking" << endl;
         cout << "---------------------------------" << endl << endl;
         break;
      }
   };

   void Parking::returnVehice() {
      cout << "---------------------------------" << endl;
      cout << "Returning Vehicle" << endl;
      cout << "---------------------------------" << endl << endl;
   };

   void Parking::listParkedVehice() {
      cout << "---------------------------------" << endl;
      cout << "Listing Parked Vehicles" << endl;
      cout << "---------------------------------" << endl << endl;
   };

   void Parking::findVehice() {
      cout << "---------------------------------" << endl;
      cout << "Finding a Vehicle" << endl;
      cout << "---------------------------------" << endl << endl;
   };

   bool Parking::closeParking() {
      char answer;
      bool flag = false;
      cout << "This will close the parking; All the vehicles will be removed!" << endl;
      cout << "Are you sure? (Y)es/(N)o: ";
      while (true) {
         cin >> answer;
         cin.ignore(1000, '\n');
         if (answer == 'Y' || answer == 'y') {
            cout << "Ending application!" << endl;
            flag = true;
            break;
         }
         else {
            if (answer != 'N' && answer != 'n') {
               cout << "Invalid response, only (Y)es or (N)o are acceptable, retry: ";
            }
            else {
               break;
            }
         }
      }
      return flag;
   };

   bool Parking::exitParking() {
      char answer;
      bool flag = false;
      cout << "This will terminate the application and save the data!" << endl;
      cout << "Are you sure? (Y)es/(N)o: ";
      while (true) {
         cin >> answer;
         cin.ignore(1000, '\n');
         if (answer == 'Y' || answer == 'y') {
            cout << "Exiting application!" << endl;
            flag = true;
            break;
         }
         else {
            if (answer != 'N' && answer != 'n') {
               cout << "Invalid response, only (Y)es or (N)o are acceptable, retry: ";
            }
            else {
               break;
            }
         }
      }
      return flag;
   };

   bool Parking::loadDataFile() {
      bool flag = false;
      if (!isEmpty()) {
         cout << "---------------------------------" << endl;
         cout << "loading data from " << m_fileName << endl;
         cout << "---------------------------------" << endl << endl;
         flag = true;
      }
      return flag;
   };

   void Parking::saveDataFile() {
      if (!isEmpty()) {
         cout << "---------------------------------" << endl;
         cout << "Saving data into " << m_fileName << endl;
         cout << "---------------------------------" << endl;
      }
   };


}