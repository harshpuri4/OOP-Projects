/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_Line_H
#define SDDS_Line_H
#include "LblShape.h"
namespace sdds {
   class Line : public LblShape {
   private:
      int m_length;
   public:
      Line();
      Line(const char* label, int length);
      void getSpecs(std::istream& is);
      void draw(std::ostream& os)const;
   };
}
#endif