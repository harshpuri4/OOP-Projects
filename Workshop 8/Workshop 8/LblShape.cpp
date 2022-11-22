/*
Name: Harsh Puri
Email: hpuri4@myseneca.ca
Student ID: 168387215
Date: 11 November
Section: NBB
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include "LblShape.h"
using namespace std;
namespace sdds {
   LblShape::LblShape() {
      m_label = nullptr;
   }
   LblShape::LblShape(const char* label) {
      m_label = nullptr;
      if (label != nullptr) {
         m_label = new char[strlen(label) + 1];
         strcpy(m_label, label);
      }
   }
   LblShape::~LblShape() {
      delete[] m_label;
      m_label = nullptr;
   }
   const char* LblShape::label()const {
      return m_label;
   }
   void LblShape::getSpecs(std::istream& is) {
      char label[101];
      is.get(label, 101, ',');
      is.ignore(1000, ',');
      delete[] m_label;
      m_label = new char[strlen(label) + 1];
      strcpy(m_label, label);
   }
}