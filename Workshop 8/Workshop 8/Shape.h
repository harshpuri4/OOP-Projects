/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_Shape_H
#define SDDS_Shape_H
namespace sdds {
   class Shape {
   public:
      virtual void draw(std::ostream& os) const = 0;
      virtual void getSpecs(std::istream& is) = 0;
      virtual ~Shape();
      friend std::ostream& operator<<(std::ostream& os, const Shape& s);
      friend std::istream& operator>>(std::istream& is, Shape& s);
   };
}
#endif