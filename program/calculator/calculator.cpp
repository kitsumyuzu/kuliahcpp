#include <iostream>

using namespace std;

void calculator() {
    int value1, value2;
    char operators, repeat;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    do {
        do {
            cout << "[?] Please insert first value: ";
            cin >> value1;
    
            cout << "[?] Please insert operator (+, -, *, /, %): ";
            cin >> operators;
    
            cout << "[?] Please insert second value: ";
            cin >> value2;
    
            switch (operators) {
                case '+':
                    cout << "-> Your answear for " << value1 << " + " << value2 << " = " << value1 + value2;
                    break;
    
                case '-':
                    cout << "-> Your answear for " << value1 << " - " << value2 << " = " << value1 - value2;
                    break;
    
                case '*':
                    cout << "-> Your answear for " << value1 << " x " << value2 << " = " << value1 * value2;
                    break;
    
                case '/':
                    cout << "-> Your answear for " << value1 << " : " << value2 << " = " << value1 / value2;
                    break;
    
                case '%':
                    cout << "-> Your answear for " << value1 << " % " << value2 << " = " << value1 % value2;
                    break;
            }
                
            cout << endl << "[?] Do you want to calculate another value (y/n): ";
            cin >> repeat;

            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
        } while (operators != '+' && operators != '-' && operators != '*' && operators != '/' && operators != '%');
    } while (repeat == 'y' || repeat == 'Y');
}