#include <iostream>
#include <iomanip>
#include <windows.h> 
using namespace std;

int main() {
    int seconds = 0, minutes = 0, hours = 0;

    while (true) {
        system("cls");
        cout << setfill('0') << setw(2) << hours << ":"
            << setfill('0') << setw(2) << minutes << ":"
            << setfill('0') << setw(2) << seconds << endl;

        Sleep(1000);
        seconds++;

        if (seconds >= 60) { seconds = 0; minutes++; }
        if (minutes >= 60) { minutes = 0; hours++; }
        if (hours >= 24) { hours = 0; }
    }

    return 0
}
