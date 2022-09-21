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
    
    void printDefinition(int matchedWord, struct Dictionary* dict)
    {
        
        for (int j = 0; j < dict->wordArr[matchedWord].m_word_num_def; j++)
        {

            cout << j + 1 << ". {" << dict->wordArr[matchedWord].m_word_type[j]
                << "} " << dict->wordArr[matchedWord].m_word_def[j] << endl;
            

        }

    }

    int matchWord(const char* word, struct Dictionary* dict)
    {
        int matchedWord = -1;

        for (int i = 0; i < dict->m_word_no; i++)
        {
            if (strcmp(word, dict->wordArr[i].m_word) == 0)
            {
                matchedWord = i;
            }
        }
        return matchedWord;
    }




}