#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

void cashConverter() {
    int value1, value2;
    double amount, result;
    char repeat;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    do {
        string menu =
            "==================================================\n"
            "> [1] Rupiah\n"
            "> [2] United State Dollar\n"
            "> [3] Singapore Dollar\n"
            "> [4] Malaysia Ringgit\n"
            "==================================================\n";

        cout << menu << endl;
        
        cout << "[?] Please select first currency: ";
        cin >> value1;

        cout << "[?] Please select a currency converted to: ";
        cin >> value2;

        try {
            cout.imbue(locale("id_ID.UTF-8"));
        } catch (const std::runtime_error& e) {
            cout << "[!] Locale id_ID.UTF-8 not supported. Falling back to default locale.\n";
            cout.imbue(locale("C"));
        }
        
        try {
            locale loc("en_US.UTF-8");
            cout.imbue(loc);
        } catch (const std::runtime_error& e) {
            cout << "[!] Locale en_US.UTF-8 not supported. Falling back to default locale.\n";
        }

        switch (value1) {
            case 1:
                switch (value2) {
                    case 2:
                        cout << "[?] Please insert amount of cash: Rp. ";
                        cin >> amount;

                        result = amount / 16500;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " Rupiah to USD " << result;
                    break;

                    case 3:
                        cout << "[?] Please insert amount of cash: Rp. ";
                        cin >> amount;

                        result = amount / 12300;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " Rupiah to SGD " << result;
                    break;

                    case 4:
                        cout << "[?] Please insert amount of cash: Rp. ";
                        cin >> amount;

                        result = amount / 3700;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " Rupiah to MYR " << result;
                    break;

                    default:
                        cout << "[!] The current currency you've selected does not exist!";
                    break;
                }
            break;

            case 2:
                switch(value2) {
                    case 1:
                        cout << "[?] Please insert amount of cash: $ ";
                        cin >> amount;

                        result = amount * 16500;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " USD to Rupiah " << result;
                    break;

                    case 3:
                        cout << "[?] Please insert amount of cash: $ ";
                        cin >> amount;

                        result = amount * 1.30;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " USD to SGD " << result;
                    break;

                    case 4:
                        cout << "[?] Please insert amount of cash: $ ";
                        cin >> amount;

                        result = amount * 4.40;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " USD to MYR " << result;
                    break;

                    default:
                        cout << "[!] The current currency you've selected does not exist!";
                    break;
                }
            break;

            case 3:
                switch(value2) {
                    case 1:
                        cout << "[?] Please insert amount of cash: S$ ";
                        cin >> amount;

                        result = amount * 12300;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " SGD to Rupiah " << result;
                    break;

                    case 2:
                        cout << "[?] Please insert amount of cash: S$ ";
                        cin >> amount;

                        result = amount * 0.70;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " SGD to USD " << result;
                    break;

                    case 4:
                        cout << "[?] Please insert amount of cash: S$ ";
                        cin >> amount;

                        result = amount * 3.30;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " SGD to MYR " << result;
                    break;

                    default:
                        cout << "[!] The current currency you've selected does not exist!";
                    break;
                }
            break;

            case 4:
                switch(value2) {
                    case 1:
                        cout << "[?] Please insert amount of cash: RM. ";
                        cin >> amount;

                        result = amount * 3700;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " MYR to Rupiah " << result;
                    break;

                    case 2:
                        cout << "[?] Please insert amount of cash: RM. ";
                        cin >> amount;

                        result = amount * 0.20;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " MYR to USD " << result;
                    break;

                    case 3:
                        cout << "[?] Please insert amount of cash: RM. ";
                        cin >> amount;

                        result = amount * 0.30;
                        cout << "-> Converted " << fixed << setprecision(2) << amount << " MYR to SGD " << result;
                    break;

                    default:
                        cout << "[!] The current currency you've selected does not exist!";
                    break;
                }
            break;

            default:
                cout << "[!] The current currency you've selected does not exist!";
            break;
        }

        cout << endl << "[?] Do you want to convert another currency (y/n): ";
        cin >> repeat;

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    } while (repeat == 'y' || repeat == 'Y');
}