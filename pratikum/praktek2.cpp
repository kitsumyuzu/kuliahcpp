#include <iostream>

using namespace std;

void praktek2() {
    int umur;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "[?] Please insert your age: ";
    cin >> umur;

    if (umur >= 18) {
        cout << "-> Kamu sudah dewasa!";
    } else {
        cout << "-> Kamu masih remaja!";
    }
}