#include "CFileLastError.h"

CFileLastError::CFileLastError()
{
    b_last_error = false;
} //CFileLastError::CFileLastError()

CFileLastError::CFileLastError(string sFileName)
{
    b_last_error = false;
    FILE  *pf_file;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL) return;
//    fprintf(pf_file, "write sth to a file");
//    fclose(pf_file);
} //CFileLastError::CFileLastError(string sFileName)

CFileLastError::~CFileLastError()
{
    b_last_error = false;
    if (pf_file != NULL)
    {
        fclose(pf_file);
    } //if (pf_file != NULL)
    delete pf_file;
} //CFileLastError::~CFileLastError()

void CFileLastError::vOpenFile(string sFileName)
{
    b_last_error = false;
    FILE  *pf_file;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL) return;
//    fprintf(pf_file, "write sth to a file");
//    fclose(pf_file);
} //void CFileLastError::vOpenFile(string sFileName)

void CFileLastError::vPrintLine(string sText)
{
    if (pf_file == NULL)
    {
        b_last_error = true;
        return;
    } //if (pf_file = NULL)
    b_last_error = false;

    char* cText = strcpy(new char[sText.length() + 1], sText.c_str());
    fprintf(pf_file, cText);
} //void CFileLastError::vPrintLine(string sText)

void CFileLastError::vPrintManyLines(vector<string> sText)
{
    b_last_error = false;
    for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)
    {
        vPrintLine(*i);
        if (bGetLastError() == true) return;
    } //for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)

} //void CFileLastError::vPrintManyLines(vector<string> sText)













