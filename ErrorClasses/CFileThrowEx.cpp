#include "CFileThrowEx.h"


CFileThrowEx::CFileThrowEx()
{

} //CFileThrowEx::CFileThrowEx()

CFileThrowEx::CFileThrowEx(string sFileName)
{
    FILE  *pf_file;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL)
    {
        throw 1;
    } //if (pf_file == NULL)
} //CFileThrowEx::CFileThrowEx(string sFileName)

CFileThrowEx::~CFileThrowEx()
{
    if (pf_file != NULL)
    {
        fclose(pf_file);
    } //if (pf_file != NULL)
    delete pf_file;
} //CFileThrowEx::~CFileThrowEx()

void CFileThrowEx::vOpenFile(string sFileName)
{
    FILE  *pf_file;
    char* cFileName = strcpy(new char[sFileName.length() + 1], sFileName.c_str());
    pf_file = fopen(cFileName, "w+");
    if (pf_file == NULL)
    {
        throw 1;
    } //if (pf_file == NULL)
} //void CFileThrowEx::vOpenFile(string sFileName)

void CFileThrowEx::vPrintLine(string sText)
{
    if (pf_file == NULL)
    {
        throw 1;
    } //if (pf_file == NULL)

    char* cText = strcpy(new char[sText.length() + 1], sText.c_str());
    fprintf(pf_file, cText);
} //void CFileThrowEx::vPrintLine(string sText)

void CFileThrowEx::vPrintManyLines(vector<string> sText)
{
    for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)
    {
        vPrintLine(*i); // error is thrown from vPrintLine method
    } //for (vector<string>::iterator i = sText.begin(); i != sText.end(); i++)
} //void CFileThrowEx::vPrintManyLines(vector<string> sText)











