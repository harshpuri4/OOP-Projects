#ifndef SDDS_Drink_H_
#define SDDS_Drink_H_
#include <iostream>
namespace sdds {
   class Drink {
      char m_name[41];
      int m_size[250];
      void copyName(const char* str);
      ~Drink();
   public:
      Drink();
      Drink& issue(const char* DrinkName);
      std::ostream& display(std::ostream& coutRef = std::cout)const;
      void set(int size);
      void print();
      bool valid()const;
      void cleanup();
  
   };
}
#endif
