#ifndef LAB_4_CFILETHROWEX_H
#define LAB_4_CFILETHROWEX_H

#include <cstdio>
#include "string"
#include <vector>

using namespace std;

class CFileThrowEx
{
    public:
        CFileThrowEx();
        CFileThrowEx(string sFileName);
        ~CFileThrowEx();
        void vOpenFile(string sFileName);
        void vPrintLine(string sText);
        void vPrintManyLines(vector<string> sText);
    private:
        FILE  *pf_file;
}; //class CFileThrowEx


#endif //LAB_4_CFILETHROWEX_H
