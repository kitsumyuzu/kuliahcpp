#include <iostream>

using namespace std;

void praktek3() {
    int day;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "[?] Please insert a random number: ";
    cin >> day;

    switch (day) {
        case 1: cout << "-> Hari senin"; break;
        case 2: cout << "-> Hari selasa"; break;
        case 3: cout << "-> Hari rabu"; break;
        case 4: cout << "-> Hari kamis"; break;
        case 5: cout << "-> Hari jum'at"; break;
        case 6: cout << "-> Hari sabtu"; break;
        case 7: cout << "-> Hari minggu"; break;
        default: cout << "[!] Dalam seminggu cuman ada 7 hari!";
    }
}