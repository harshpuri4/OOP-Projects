/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#include "File.h"
#include "Population.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

using namespace std;
namespace sdds {
	int size;
	Population* population;

	void Ascendingsort()
	{
		int i;
		int j;
		Population temporary;
		for (i = size - 1; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				if (population[j].population > population[j + 1].population)
				{
					temporary = population[j];
					population[j] = population[j + 1];
					population[j + 1] = temporary;
				}
			}
		}
	}

	bool load(Population& pop)
	{
		bool flag = false;
		char n[128];
		if (1)
		{
			flag = read(n);
			flag = flag && read(pop.population);
			pop.postalcode = new char[strlen(n) + 1];
			strcpy(pop.postalcode, n);
		}
		return flag;
	}

	bool load(const char dataFile[])
	{
		bool flag = false;
		int j = 0;
		if (openFile(dataFile))
		{
			flag = true;

			size = noOfRecords();

			population = new Population[size];

			for (j = 0; flag && j < size; j++)
			{
				flag = load(population[j]);
			}
			if (!flag)
			{
				cout << "Error: incorrect number of records read; the data is possibly corrupted\n";
			}
			else
			{
				flag = true;
			}
			closeFile();
		}
		return flag;
	}

	void display(Population& pop)
	{
		cout << pop.postalcode << ":  " << pop.population << "\n";
	}


	void display()
	{
		Ascendingsort();
		cout << "Postal Code: population\n";
		cout << "-------------------------\n";
		int i = 0;
		int j = 0;
		long sum = 0;
		for (i = 0, j = 1; i < size; i++)
		{
			cout << j++ << "- ";
			display(population[i]);
			sum = sum + population[i].population;
		}
		cout << "-------------------------\n";
		cout << "Population of Canada: " << sum << "\n";
	}


	void deallocateMemory()
	{
		int j = 0;
		while (j < size)
		{
			delete[] population[j].postalcode;
			population[j].postalcode = nullptr;
			j++;
		}
		delete[] population;
		return;
	}


}