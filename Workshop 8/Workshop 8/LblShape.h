/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_LblShape_H
#define SDDS_LblShape_H
#include "Shape.h"
namespace sdds {
   class LblShape : public Shape {
   private:
      char* m_label;
   protected:
      const char* label()const;
   public:
      LblShape();
      LblShape(const char* label);
      ~LblShape();
      LblShape(const LblShape& LblShape) = delete;
      LblShape& operator=(const LblShape& LblShape) = delete;
      void getSpecs(std::istream& is);
   };
}
#endif