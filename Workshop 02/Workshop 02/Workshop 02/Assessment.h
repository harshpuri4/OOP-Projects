/*
Name - Harsh Puri
Student ID - 168387215
Seneca ID - hpuri4@myseneca.ca
Section - NBB
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/
#ifndef SDDS_ASSESSMENT_H_
#define SDDS_ASSESSMENT_H_

namespace sdds {
    //MAX character 60 + 1
    const int MAX_LENGTH = 61;

    struct Assessment {
        double* m_mark;
        char* m_title;
    };

    bool read(int& value, FILE* fptr);

    bool read(double& value, FILE* fptr);

    bool read(char* cstr, FILE* fptr);

    bool read(Assessment& asmnt, FILE* fptr);

    void freeMem(Assessment*& aptr, int size);

    int read(Assessment*& aptr, FILE* fptr);
}
#endif // !SDDS_ASSESSMENT_H_