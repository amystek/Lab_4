#include "main.h"

int main()
{
    // TODO: fix some errors, still not everything work properly
    vFileLastError();
    vFileThrowEx();
    vFileErrCode();
    return 0;
} //int main()

void vFileLastError()
{
    CFileLastError c_file;
    cout << endl << "CFileLastError Class" << endl;
    for (int ii = 0; ii < 10; ii++)
    {
        c_file.vOpenFile("./out/CFileLastError" + to_string(ii) + ".txt");
        c_file.vPrintLine(to_string(ii));
        cout << "iteration " + to_string(ii) + " error:" << boolalpha << c_file.bGetLastError() << endl;
    } //for (int ii = 0; ii < 10; ii++)
} //void vFileLastError()

void vFileThrowEx()
{
    CFileThrowEx c_file;
    cout << endl << "CFileThrowEx Class" << endl;
    for (int ii = 0; ii < 10; ii++)
    {
        try
        {
            c_file.vOpenFile("./out/CFileThrowEx" + to_string(ii) + ".txt");
            c_file.vPrintLine(to_string(ii));
            cout << to_string(ii) << " success: true" << endl;
        } //try
        catch (int i_exception)
        {
            cout << to_string(ii) << " success: false, error code:" << i_exception << endl;
        } //catch (int i_exception)
    } //for (int ii = 0; ii < 10; ii++)
} //void vFileThrowEx()

void vFileErrCode()
{
    CFileErrCode c_file;
    cout << endl << "CFileLastError Class" << endl;
    for (int ii = 0; ii < 10; ii++)
    {
        bool b_result;
        b_result = c_file.bOpenFile("./out/vFileErrCode" + to_string(ii) + ".txt");
        cout << to_string(ii) << " bOpenFile returns:" << boolalpha << b_result << endl;
        b_result = c_file.bPrintLine(to_string(ii));
        cout << to_string(ii) << " bPrintLine returns:" << boolalpha << b_result << endl;
    } //for (int ii = 0; ii < 10; ii++)
} //void vFileErrCode()



