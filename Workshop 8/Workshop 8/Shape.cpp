/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Shape.h"
using namespace std;
namespace sdds {
   std::ostream& operator<<(std::ostream& os, const Shape& s) {
      s.draw(os);
      return os;
   }
   Shape::~Shape() {
   }
   std::istream& operator>>(std::istream& is, Shape& s) {
      s.getSpecs(is);
      return is;
   }
}