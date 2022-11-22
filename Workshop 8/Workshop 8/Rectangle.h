/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_Rectangle_H
#define SDDS_Rectangle_H
#include "LblShape.h"
namespace sdds {
   class Rectangle : public LblShape {
   private:
      int m_width;
      int m_height;
   public:
      Rectangle();
      Rectangle(const char* label, int width, int height);
      void getSpecs(std::istream& is);
      void draw(std::ostream& os)const;
   };
}
#endif