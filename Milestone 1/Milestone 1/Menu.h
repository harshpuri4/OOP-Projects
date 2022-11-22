/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#ifndef SDDS_MENU_H
#define SDDS_MENU_H

namespace sdds
{
   const int MAX_NO_OF_ITEMS = 10;
   const int MAX_NAME_LEN = 50;

   class MenuItem
   {
      char m_content[MAX_NAME_LEN + 1];

      MenuItem();
      MenuItem(const char* title);
      MenuItem(const MenuItem& menuitem) = delete;
      std::ostream& display(std::ostream& os) const;
      MenuItem& operator=(const MenuItem& menuitem) = delete;
      friend class Menu;
   };

   class Menu
   {
      char m_title[MAX_NAME_LEN + 1];
      MenuItem m_item[MAX_NO_OF_ITEMS]{};
      int m_indent;
      int m_num;
   public:
      Menu();
      Menu(const char* title, int indent = 0);
      Menu(const Menu& menu) = delete;
      Menu& operator=(const Menu& menu) = delete;
      Menu& operator=(const char* title);
      Menu& operator<<(const char* title);
      explicit operator bool() const;
      operator int() const;
      void setEmpty();
      bool isEmpty() const;
      void display() const;
      void add(const char* title);
      int run() const;
      void clear();
      bool titleValid(const char* title) const;
   };
}

#endif // !SDDS_MENU_H
