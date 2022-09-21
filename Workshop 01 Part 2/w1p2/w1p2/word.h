/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/


#ifndef SDDS_WORD_H
#define SDDS_WORD_H

 
namespace sdds
{

	const int MAX_DEFINITION_LENGTH = 1024;
	const int MAX_WORD_DEFINTIONS = 8;
	const int MAX_WORD_TYPE = 64;
	const int MAX_WORD_CHAR = 64;

	struct Word
	{
		char m_word[MAX_WORD_CHAR + 1];
		char m_word_type[MAX_WORD_DEFINTIONS][MAX_WORD_CHAR + 1];
		char m_word_def[MAX_WORD_DEFINTIONS][MAX_DEFINITION_LENGTH + 1];
		int m_word_num_def;
	};

	void printDefinition(int matchedWord, struct Dictionary* dict);
    int matchWord(const char* word, struct Dictionary* dict);

}


#endif

