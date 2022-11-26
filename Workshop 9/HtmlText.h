/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 23 November
Section: NBB
*/
#ifndef SDDS_HTMLTEXT_H
#define SDDS_HTMLTEXT_H
#include "Text.h"
#include<iostream>

namespace sdds {
   class HtmlText : public Text {
   private:
      char* m_title;
   public:
      HtmlText();
      HtmlText(const char* title);
      HtmlText(const HtmlText& src);
      HtmlText& operator=(const HtmlText& src);
      ~HtmlText();
      std::ostream& write(std::ostream& os = std::cout) const;
      friend std::ostream& operator <<(std::ostream& os, const HtmlText& src);
   };
}

#endif