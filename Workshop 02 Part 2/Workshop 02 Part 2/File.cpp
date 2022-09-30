/***********************************************************************
// OOP244 Workshop 2 p2: tester program
//
// File  File.cpp
// Version 1.0
// Date  2022/09/17
// Author   Fardad Soleimanloo
// Description
// This file is incomplete and to be completed by students
// Revision History
*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
    FILE* fptr;
    // Opens a file and keeps the file pointer in the File.cpp (file scope)
    bool openFile(const char filename[]) {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }
    // Finds and returns the number of records kept in the file 
    // to be used for the dynamic memory allocation of the records in the program
    int noOfRecords() {
        int noOfRecs = 0;
        char ch;
        while (fscanf(fptr, "%c", &ch) == 1) {
            noOfRecs += (ch == '\n');
        }
        rewind(fptr);
        return noOfRecs;
    }
    // Closes the open file
    void closeFile() {
        if (fptr) fclose(fptr);
    }
    bool read(char m_postalcode[])
    {
        //scaning the file  and setting the ptr to 1
        return fscanf(fptr, "%[^,],", m_postalcode) == 1;
    }
    bool read(int& m_population)
    {
        return fscanf(fptr, "%d\n", &m_population) == 1;
    }

}