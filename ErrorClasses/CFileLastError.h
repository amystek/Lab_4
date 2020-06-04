#ifndef LAB_4_CFILELASTERROR_H
#define LAB_4_CFILELASTERROR_H

#include <cstdio>
#include "string"
#include <vector>

using namespace std;

class CFileLastError
{
public:
    CFileLastError();
    CFileLastError(string sFileName);
    ~CFileLastError();
    void vOpenFile(string sFileName);
    void vPrintLine(string sText);
    void vPrintManyLines(vector<string> sText);
    bool bGetLastError() {return(b_last_error);}
private:
    FILE  *pf_file;
    bool b_last_error;
    int i_last_error;
}; //class CFileLastError

#endif //LAB_4_CFILELASTERROR_H
