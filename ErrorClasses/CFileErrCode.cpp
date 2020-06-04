#include "CFileErrCode.h"

CFileErrCode::CFileErrCode()
{

} //CFileErrCode::CFileErrCode()

CFileErrCode::CFileErrCode(string sFileName, bool *pb_Succes)
{
    FILE  *pf_file;
    *pb_Succes = false;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL)
    {
        *pb_Succes = true;
    } //if (pf_file == NULL)
} //CFileLastError::CFileLastError(string sFileName)

CFileErrCode::~CFileErrCode()
{
    if (pf_file != NULL)
    {
        fclose(pf_file);
    } //if (pf_file != NULL)
    delete pf_file;
} //CFileLastError::~CFileLastError()

bool CFileErrCode::bOpenFile(string sFileName)
{
    FILE  *pf_file;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL) return false;
    return true;    // method succed
} //bool CFileErrCode::bOpenFile(string sFileName)

bool CFileErrCode::bPrintLine(string sText)
{
    if (pf_file == NULL)
    {
        return false;
    } //if (pf_file = NULL)

    char* cText = strcpy(new char[sText.length() + 1], sText.c_str());
    fprintf(pf_file, cText);
    return true;
} //bool CFileErrCode::bPrintLine(string sText)

bool CFileErrCode::bPrintManyLines(vector<string> sText)
{
    for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)
    {
        if (!bPrintLine(*i)) return false;
    } //for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)
    return true;
} //bool CFileErrCode::bPrintManyLines(vector<string> sText)