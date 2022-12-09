/*
Workshop 10
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Section: NBB
*/
#ifndef SDDS_SEARCH_H_
#define SDDS_SEARCH_H_
#include <iostream>
#include <cstring>
#include "Collection.h"
using namespace std;
namespace sdds {
   template <typename T>
   bool search(T A[], int n, const char* key, Collection<T>& C) {
      int count = 0;
      for (int i = 0; i < n; i++) {
         if (A[i] == key) {
            count++;
            C.add(A[i]);
            C.resize(count);
         }
      }
      return (count > 0);
   }
};
#endif
