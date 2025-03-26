#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int jumlahMahasiswa;
    float totalNilai = 0, nilai, rataRata;

    // Meminta input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Memastikan jumlah mahasiswa valid
    if (jumlahMahasiswa <= 0) {
        cout << "Jumlah mahasiswa harus lebih dari 0!" << endl;
        return 1; // Keluar dari program dengan kode error
    }

    // Array untuk menyimpan data mahasiswa
    vector<string> npm(jumlahMahasiswa);
    vector<string> nama(jumlahMahasiswa);
    vector<string> mataKuliah(jumlahMahasiswa);
    vector<float> nilaiMahasiswa(jumlahMahasiswa);

    // Meminta input data dan nilai untuk setiap mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMasukkan data mahasiswa ke-" << i + 1 << ":\n";
        cout << "NPM: ";
        cin >> npm[i];
        cin.ignore(); // Membersihkan buffer input
        cout << "Nama: ";
        getline(cin, nama[i]);
        cout << "Mata Kuliah: ";
        getline(cin, mataKuliah[i]);
        cout << "Nilai: ";
        cin >> nilaiMahasiswa[i];

        // Menambahkan nilai ke total
        totalNilai += nilaiMahasiswa[i];
    }

    // Menghitung rata-rata
    rataRata = totalNilai / jumlahMahasiswa;

    // Menampilkan data mahasiswa dan nilai rata-rata
    cout << "\n===== Data Mahasiswa dan Nilai =====\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ":\n";
        cout << "NPM: " << npm[i] << endl;
        cout << "Nama: " << nama[i] << endl;
        cout << "Mata Kuliah: " << mataKuliah[i] << endl;
        cout << "Nilai: " << nilaiMahasiswa[i] << endl;
        cout << "--------------------------\n";
    }

    // Menampilkan nilai rata-rata
    cout << "\nNilai rata-rata dari " << jumlahMahasiswa << " mahasiswa adalah: " << rataRata << endl;
}