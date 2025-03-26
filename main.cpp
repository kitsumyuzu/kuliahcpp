/**
 * 1. #include | Digunakan untuk memanggil library yang ada pada pemrograman c++
 * 2. <iostream> | <iostream> ini adalah sebuah library yang terdapat pada c++ yang digunakan untuk menggunakan input output secara langsung / stream
*/

#include <iostream>
#include <iomanip>
#include <locale>

#include "pratikum/praktek1.cpp"
#include "pratikum/praktek2.cpp"
#include "pratikum/praktek3.cpp"
#include "pratikum/praktek4.cpp"

#include "program/basic_math/basic.cpp"
#include "program/calculator/calculator.cpp"

#include "program/converter/cashConverter.cpp"
#include "program/converter/lengthConverter.cpp"
#include "program/converter/temperatureConverter.cpp"

// using namespace std; | Digunakan untuk mendeklarasikan bahwa program yang sedang berjalan merupakan standart / tidak perlu di panggil kembali penggunaan std:: <- ini
using namespace std;

void login() {
    string username, password;
    const string d_username = "kitsu", d_password = "kitsuc123";

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    do {
        cout << "       Welcome to Kitsu C       " << endl << "================================" << endl;
        
        cout << "Username: ";
        cin >> username;
    
        cout << "Password: ";
        cin >> password;

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    } while (username != d_username || password != d_password);

    cout << "Successfully logged in as " << d_username << endl;
}

int main() {
    int program;
    char repeat;

    login();

    do {
        string p_list =
            "==================================================\n"
            "> [1] Basic Math\n"
            "> [2] Calculator\n"
            "> [3] Cash Converter\n"
            "> [4] Length Converter\n"
            "> [5] Temperature Converter\n"
            "> [101] Praktek 1\n"
            "> [102] Praktek 2\n"
            "> [103] Praktek 3\n"
            "> [104] Praktek 4\n"
            "> [0] Logout\n"
            "==================================================\n";

        cout << p_list << endl << "[?] Please select a program to run: ";
        cin >> program;

        switch (program) {
            case 1:
                basicMath();
                break;
            case 2:
                calculator();
                break;
            case 3:
                cashConverter();
                break;
            case 4:
                lengthConverter();
                break;
            case 5:
                temperatureConverter();
                break;
            case 101:
                praktek1();
                break;
            case 102:
                praktek2();
                break;
            case 103:
                praktek3();
                break;
            case 104:
                praktek4();
                break;
            case 0:
                login();
                break;
            default:
                cout << "[!] Invalid selection. Please choose a valid program.\n";
                break;
        }

        cout << endl << "[?] Do you want to run another program (y/n): ";
        cin >> repeat;

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

    } while (repeat == 'y' || repeat == 'Y');

    cout << "> Program ended, thank you.\n";
    return 0;
}