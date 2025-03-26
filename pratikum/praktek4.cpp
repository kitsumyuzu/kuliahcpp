#include <iostream>

using namespace std;

void praktek4() {
    int value;
    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "[?] Please insert a random number: ";
    cin >> value;

    string result = (value % 2 == 0) ? "Genap" : "Ganjil";
    cout << "-> Angka tersebut adalah " << result;
}