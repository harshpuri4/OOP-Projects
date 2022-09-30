//***********************************************************************
// OOP244 Workshop 2 p2: tester program
//
// File  File.h
// Version 1.0
// Date  2022/09/17
// Author   Fardad Soleimanloo
// Description
// This file is incomplete and to be completed by students
// Revision History
// -----------------------------------------------------------
/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
	// Opens a file and keeps the file pointer in the File.cpp (file scope)
	bool openFile(const char filename[]);
	// Closes the open file
	void closeFile();
	// Finds the records kept in the file to be used for the dynamic memory allocation 
	// of the records in the file
	int noOfRecords();
	
	bool read(char m_postalcode[]);

	bool read(int& m_population);
}
#endif // !SDDS_FILE_H_
