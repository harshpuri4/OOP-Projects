/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/

#ifndef SDDS_DICTIONARY_H
#define SDDS_DICTIONARY_H
#include "word.h"

 
namespace sdds
{
	const int MAX_WORD_NO = 100;

	struct Dictionary
	{

		struct Word wordArr[MAX_WORD_NO];
		int m_word_no;

	};
    int LoadDictionary(const char* filename);
	
	void SaveDictionary(const char* filename);

	void DisplayWord(const char* word);
	
    void AddWord(const char* word, const char* type, const char* definition);

	int UpdateDefinition(const char* word, const char* type, const char* definition);

	void RemoveDictionary(void);

}

#endif

