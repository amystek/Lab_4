#ifndef LAB_4_CFILEERRCODE_H
#define LAB_4_CFILEERRCODE_H

#include <cstdio>
#include "string"
#include "vector"

using namespace std;

class CFileErrCode
{
    public:
        CFileErrCode();
        CFileErrCode(string sFileName, bool *pb_Error);
        ~CFileErrCode();
        bool bOpenFile(string sFileName);
        bool bPrintLine(string sText);
        bool bPrintManyLines(vector<string> sText);
    private:
        FILE  *pf_file;
};


#endif //LAB_4_CFILEERRCODE_H
