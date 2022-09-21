/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "dictionary.h"
#include "word.h"

using namespace std; 

namespace sdds
{
	struct Dictionary dict;

	int LoadDictionary(const char* filename)
	{
		RemoveDictionary();

		const char* DICTIONARY_TXT = filename;
		FILE* dtptr = nullptr;

		dtptr = fopen(DICTIONARY_TXT, "r");

		if (dtptr != nullptr)
		{
			
			for (int i = 0; feof(dtptr) == 0; i++)
			{

				fscanf(dtptr, "%[^\n]", dict.wordArr[i].m_word);
				
				fgetc(dtptr);

				for (int j = 0; fgetc(dtptr) == '\t'; j++)
				{

					fscanf(dtptr, "\t%[^:]", dict.wordArr[i].m_word_type[j]);
					
					fscanf(dtptr, ": %[^\n]", dict.wordArr[i].m_word_def[j]);
				

					fgetc(dtptr);

					dict.wordArr[i].m_word_num_def = j + 1;
				}

				dict.m_word_no = i + 1;
			}
			fclose(dtptr);

			return 0;
			
		}
		else
		{
			return 1;
			
		}
	}

	void SaveDictionary(const char* filename)
	{
		const char* DICTIONARY_TXT = filename;
		FILE* dt2ptr = nullptr;

		dt2ptr = fopen(DICTIONARY_TXT, "w");

		
		if (dt2ptr != nullptr)
		{
			
			for (int i = 0; i < dict.m_word_no; i++)
			{
				fprintf(dt2ptr, "%s\n", dict.wordArr[i].m_word);
				

				
				for (int j = 0; j < dict.wordArr[i].m_word_num_def; j++)
				{
					fprintf(dt2ptr, "\t%s: %s\n",
						dict.wordArr[i].m_word_type[j], dict.wordArr[i].m_word_def[j]);
					
				}
				fprintf(dt2ptr, "\n");
			}
			fclose(dt2ptr);
			
		}
	}

	
	void DisplayWord(const char* word)
	{
		int result;
		

		result = matchWord(word, &dict);

		
		if (result >= 0)
		{
			cout << "FOUND: [" << word << "] has ["
				<< dict.wordArr[result].m_word_num_def << "] definitions:" << endl;
			

			printDefinition(result, &dict);
			
		}
		else
		{
			

			
			cout << "NOT FOUND: word [" << word << "] is not in the dictionary." << endl;
			
		}
	}

	
	void AddWord(const char* word, const char* type, const char* definition)
	{
		int result;

		result = matchWord(word, &dict);

		
		if (result >= 0)
		{
		
			strcpy(dict.wordArr[result].m_word_type[dict.wordArr[result].m_word_num_def], type);

			strcpy(dict.wordArr[result].m_word_def[dict.wordArr[result].m_word_num_def], definition);

			dict.wordArr[result].m_word_num_def += 1;
		}

		else
		{
			
			strcpy(dict.wordArr[dict.m_word_no].m_word, word);
			strcpy(dict.wordArr[dict.m_word_no].m_word_type[0], type);
			strcpy(dict.wordArr[dict.m_word_no].m_word_def[0], definition);

			dict.wordArr[dict.m_word_no].m_word_num_def += 1;

			dict.m_word_no += 1;
		}
	}

	
	int UpdateDefinition(const char* word, const char* type, const char* definition)
	{
		int result;
		int defUpdate;
		

		result = matchWord(word, &dict);

		if (dict.wordArr[result].m_word_num_def >= 0)
		{

			cout << "The word [" << word << "] has multiple definitions:" << endl;
			printDefinition(result, &dict);
			

			cout << "Which one to update? ";
			

			cin >> defUpdate;
			

			
			strcpy(dict.wordArr[result].m_word_type[defUpdate - 1], type);

			strcpy(dict.wordArr[result].m_word_def[defUpdate - 1], definition);
		}

		
		else
		{
			strcpy(dict.wordArr[result].m_word_type[0], type);
			strcpy(dict.wordArr[result].m_word_def[0], definition);
		}

		return 0;
		
	}


	void RemoveDictionary()
	{
		char null[MAX_WORD_NO] = { "\0" };

		
		if (dict.m_word_no > 0)
		{
			for (int i = 0; i < dict.m_word_no; i++)
			{
				
				strcpy(dict.wordArr[i].m_word, null);
			}
		}

	}


}