/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "ReadWritable.h"

using namespace std;
namespace sdds
{

   ReadWritable::ReadWritable() {
      flag = false;
   };

   ReadWritable::~ReadWritable() {
      //empty body
   }

   bool ReadWritable::isCsv() const {
      return flag;
   };

   void ReadWritable::setCsv(bool value) {
      flag = value;
   };

   std::ostream& operator<<(std::ostream& os, ReadWritable& w) {
      return w.write(os);
   }
   std::istream& operator>>(std::istream& is, ReadWritable& r) {
      return r.read(is);
   }

}