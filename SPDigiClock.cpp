#include <iostream>
#include <windows.h>
#include <ctime>
#include <iomanip>

int main()
{
    while(1)
    {
        time_t now = time(0);
        struct tm *time;
        time = std::localtime(&now);
        std::cout << std::setw(2) << std::setfill('0') << time->tm_hour << ":" << std::setw(2) << std::setfill('0') << time->tm_min << ":" << std::setw(2) << std::setfill('0') << time->tm_sec << std::endl;
        Sleep(1000);
        system("cls");
    }
}