#include <iostream>
#include <iomanip>

using namespace std;

void lengthConverter() {
    int value1, value2;
    double amount, result;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    string menu =
        "==================================================\n"
        "> [1] Kilometer      > [6] Nanometer\n"
        "> [2] Meter          > [7] Mile\n"
        "> [3] Centimeter     > [8] Yard\n"
        "> [4] Millimeter     > [9] Foot\n"
        "> [5] Macrometer     > [10] Inch\n"
        "==================================================\n";

    cout << menu << endl;
    
    cout << "[?] Please select first length: ";
    cin >> value1;

    cout << "[?] Please select a length converted to: ";
    cin >> value2;

    cout << "[?] Please insert amount of length: ";
    cin >> amount;

    switch (value1) {
        case 1:
            switch (value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 2:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 3:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 4:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 5:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 6:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 7:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 8:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 9:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        case 10:
            switch(value2) {
                case 1:
                    result = amount;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " meter to meter " << result;
                break;

                default:
                    cout << "The current length you've selected does not exist!";
                break;
            }
        break;

        default:
            cout << "The current length you've selected does not exist!";
        break;
    }
}   