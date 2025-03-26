#include <iostream>
#include <iomanip>

using namespace std;

void temperatureConverter() {
    int value1, value2;
    double amount, result;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    string menu =
        "==================================================\n"
        "> [1] Celcius\n"
        "> [2] Fahrenheit\n"
        "> [3] Kelvin\n"
        "> [4] Reamur\n"
        "> [5] Rankine\n"
        "==================================================\n";

    cout << menu << endl;
    
    cout << "[?] Please select first temperature: ";
    cin >> value1;

    cout << "[?] Please select a temperature converted to: ";
    cin >> value2;

    cout << "[?] Please insert amount of temperature: ";
    cin >> amount;

    switch (value1) {
        case 1:
            switch (value2) {
                case 2:
                    result = (amount * 9.0 / 5.0) + 32;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Celcius to Fahrenheit " << result;
                break;

                case 3:
                    result = amount + 273.15;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Celcius to Kelvin " << result;
                break;

                case 4:
                    result = (amount * 4.0 / 5.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Celcius to Reamur " << result;
                break;

                case 5:
                    result = (amount * 9.0 / 5.0) + 491.67;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Celcius to Rankine " << result;
                break;

                default:
                    cout << "[!] The current temperature you've selected does not exist!";
                break;
            }
        break;

        case 2:
            switch(value2) {
                case 1:
                    result = (amount - 32) * (5.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Fahrenheit to Celcius " << result;
                break;

                case 3:
                    result = (amount + 459.67) * (5.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Fahrenheit to Kelvin " << result;
                break;

                case 4:
                    result = (amount - 32) * (4.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Fahrenheit to Reamur " << result;
                break;

                case 5:
                    result = amount + 459.67;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Fahrenheit to Rankine " << result;
                break;

                default:
                    cout << "[!] The current temperature you've selected does not exist!";
                break;
            }
        break;

        case 3:
            switch(value2) {
                case 1:
                    result = amount - 273.15;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Kelvin to Celcius " << result;
                break;

                case 2:
                    result = (amount * 9.0 / 5.0) - 459.67;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Kelvin to Fahrenheit " << result;
                break;

                case 4:
                    result = (amount - 273.15) * (4.0 / 5.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Kelvin to Reamur " << result;
                break;

                case 5:
                    result = amount * (9.0 / 5.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Kelvin to Rankine" << result;
                break;

                default:
                    cout << "[!] The current temperature you've selected does not exist!";
                break;
            }
        break;

        case 4:
            switch(value2) {
                case 1:
                    result = amount * (5.0 / 4.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Reamur to Celcius " << result;
                break;

                case 2:
                    result = amount * (9.0 / 4.0) + 32;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Reamur to Fahrenheit " << result;
                break;

                case 3:
                    result = amount * (5.0 / 4.0) + 273.15;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Reamur to Kelvin " << result;
                break;

                case 5:
                    result = amount * (9.0 / 4.0) + 491.67;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Reamur to Rankine " << result;
                break;

                default:
                    cout << "[!] The current temperature you've selected does not exist!";
                break;
            }
        break;

        case 5:
            switch(value2) {
                case 1:
                    result = (amount - 491.67) * (5.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Rankine to Celcius " << result;
                break;

                case 2:
                    result = amount - 459.67;
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Rankine to Fahrenheit " << result;
                break;

                case 3:
                    result = amount * (5.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Rankine to Kelvin " << result;
                break;

                case 4:
                    result = (amount - 491.67) * (4.0 / 9.0);
                    cout << "-> Converted " << fixed << setprecision(2) << amount << " Rankine to Reamur " << result;
                break;

                default:
                    cout << "[!] The current temperature you've selected does not exist!";
                break;
            }
        break;

        default:
            cout << "[!] The current length you've selected does not exist!";
        break;
    }
}