/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include "Utils.h"
#include "Assessment.h"

namespace sdds {

    bool read(int& value, FILE* fptr) {
        char ch;
        int flag = false;
        if (fptr != NULL) {
            fscanf(fptr, "%d%c", &value, &ch);
            if (ch != '\n') {
                while (fgetc(fptr) != '\n'); 
            }
            flag = true;
        }
        return flag;
    }
    bool read(double& value, FILE* fptr) {
        int flag = false;
        if (fptr != NULL) {
            fscanf(fptr, "%lf", &value);
            flag = true;
        }
       
        return flag;
    }
    bool read(char* cstr, FILE* fptr) {
        char ch;
        int flag = false;
        if (fptr != NULL) {
            fscanf(fptr, ",%60[^\n]%c", cstr, &ch);
            if (ch != '\n') {
                while (fgetc(fptr) != '\n'); 
            }
            flag = true;
        }
        
        return flag;
    }
    bool read(Assessment& asmnt, FILE* fptr) {
        char ch;
        int flag = false;
        double memory = 0;
        char memoryChar[MAX_LENGTH];
        


        if (fptr != NULL && fscanf(fptr, "%lf,%60[^\n]%c", &memory, memoryChar, &ch) != EOF) {
            if (ch != '\n') {
                while (fgetc(fptr) != '\n'); 
            }
            flag = true;

            asmnt.m_mark = new double();
            asmnt.m_title = new char[MAX_LENGTH];

            strcpy(asmnt.m_title, memoryChar);
            *asmnt.m_mark = memory;
        }
        else {
        }
       
        return flag;
    }

    void freeMem(Assessment*& aptr, int size) {

        for (int i = 0; i < size; i++) {
            delete aptr[i].m_mark;
            aptr[i].m_mark = nullptr;
            delete[] aptr[i].m_title;
            aptr[i].m_title = nullptr;
        }

        delete[] aptr;
        aptr = nullptr;
    }
    int read(Assessment*& aptr, FILE* fptr) {
        
        char ch;
        int records = 0;
        int count = 0;
        int i = 0;
        if (fptr != NULL) {
            fscanf(fptr, "%d%c", &records, &ch);
            if (ch != '\n') {
                while (fgetc(fptr) != '\n'); 
            }

            aptr = new Assessment[records];
            for (i = 0; i < records; i++) {
                count += read(aptr[i], fptr);
            }
        }
   
        if (count != records) {
            freeMem(aptr, count);
            records = 0;
        }

        return records;
    }
}