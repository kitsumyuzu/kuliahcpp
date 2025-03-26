#include <iostream>

using namespace std;

void basicMath() {
    int value1, value2;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "[?] Please insert first value: ";
    cin >> value1;

    cout << "[?] Please insert second value: ";
    cin >> value2;

    cout << "-> Your answear for " << value1 << " + " << value2 << " = " << value1 + value2 << endl;
    cout << "-> Your answear for " << value1 << " - " << value2 << " = " << value1 - value2 << endl;
    cout << "-> Your answear for " << value1 << " x " << value2 << " = " << value1 * value2 << endl;
    cout << "-> Your answear for " << value1 << " : " << value2 << " = " << value1 / value2 << endl;
}