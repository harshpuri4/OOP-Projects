/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_POPULATION_H_
#define SDDS_POPULATION_H_
#include <cstdio>
namespace sdds {

	struct Population
	{
		char* postalcode;
		int population;
	};

	void Ascendingsort();
	bool load(Population& pop);
	bool load(const char dataFile[]);
	void display(Population& pop);
	void display();
	void deallocateMemory();

}
#endif // SDDS_POPULATION_H_
