/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#ifndef SDDS_READWRITABLE_H
#define SDDS_READWRITABLE_H

namespace sdds {
   class ReadWritable {
      bool flag;
   public:
      ReadWritable();
      virtual ~ReadWritable();
      bool isCsv() const;
      void setCsv(bool value);
      virtual std::ostream& write(std::ostream& os = std::cout) const = 0;
      virtual std::istream& read(std::istream& in = std::cin) = 0;
      friend std::ostream& operator << (std::ostream& os, ReadWritable& w);
      friend std::istream& operator>>(std::istream& is, ReadWritable& r);
   };
}
#endif // !SDDS_READWRITABLE_H
