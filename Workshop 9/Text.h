/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 23 November
Section: NBB
*/
#ifndef SDDS_TEXT_H
#define SDDS_TEXT_H
#include<iostream>

namespace sdds {
   class Text {
   private:
      char* m_content;
   public:
      Text();
      Text(const Text& src);
      Text& operator=(const Text& src);
      ~Text();
      unsigned getFileLength(std::istream& is);
      std::istream& read(std::istream& is = std::cin);
      virtual std::ostream& write(std::ostream& os = std::cout) const;
      friend std::istream& operator>>(std::istream& is, Text& src);
      friend std::ostream& operator<<(std::ostream& os, Text& src);
      void setContent(const Text& src);
   protected:
      const char& operator[](int index)const;
   };
}

#endif
