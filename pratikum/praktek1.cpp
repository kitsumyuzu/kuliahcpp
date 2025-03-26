#include <iostream>

using namespace std;

void praktek1() {  
    string NIM = "2413201004", nama_mahasiswa = "Fransisco", jurusan_mahasiswa = "Sistem Informasi";

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    cout << "==================================================" << endl;
    cout << "-> NIM: " << NIM << endl;
    cout << "-> Nama: " << nama_mahasiswa << endl;
    cout << "-> Jurusan: " << jurusan_mahasiswa << endl;
    cout << "==================================================" << endl;

    const int alas = 3, tinggi = 7;

    cout << "-> Alas: " << alas << endl;
    cout << "-> Tinggi: " << tinggi << endl;
    cout << "-> Luas Segitiga: " << 0.5 * alas * tinggi << endl;
}