#include <iostream>
#include <windows.h>

using namespace std;

void check_windows_version()
{
    OSVERSIONINFOEX osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

    if (!GetVersionEx((OSVERSIONINFO*)&osvi))
    {
        return;
    }

    if (osvi.dwMajorVersion > 6 || (osvi.dwMajorVersion == 6 && osvi.dwMinorVersion >= 2))
    {
        cout << "[+] Your Windows version is up to date" << endl;
    }
    else
    {
        cout << "[-] Your indows version is not up to date" << endl;
    }
}

int main()
{
    check_windows_version();
    return 0;
}
