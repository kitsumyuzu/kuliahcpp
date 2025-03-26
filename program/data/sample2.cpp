#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isAvailable;
};

vector<Book> library;

void addBook(int id, string title, string author) {
    library.push_back({id, title, author, true});
}

void displayBooks() {
    cout << "\nDaftar Buku:\n";
    cout << left << setw(5) << "ID" << setw(30) << "Judul" << setw(20) << "Penulis" << "Status" << endl;
    for (const auto &book : library) {
        cout << left << setw(5) << book.id << setw(30) << book.title 
             << setw(20) << book.author << (book.isAvailable ? "Tersedia" : "Dipinjam") << endl;
    }
}

void borrowBook(int id) {
    for (auto &book : library) {
        if (book.id == id) {
            if (book.isAvailable) {
                book.isAvailable = false;
                cout << "\nBuku '" << book.title << "' berhasil dipinjam." << endl;
            } else {
                cout << "\nBuku sedang dipinjam!" << endl;
            }
            return;
        }
    }
    cout << "\nBuku tidak ditemukan!" << endl;
}

void returnBook(int id) {
    for (auto &book : library) {
        if (book.id == id) {
            if (!book.isAvailable) {
                book.isAvailable = true;
                cout << "\nBuku '" << book.title << "' berhasil dikembalikan." << endl;
            } else {
                cout << "\nBuku sudah tersedia di perpustakaan!" << endl;
            }
            return;
        }
    }
    cout << "\nBuku tidak ditemukan!" << endl;
}

int main() {
    addBook(1, "C++ Programming", "Bjarne Stroustrup");
    addBook(2, "Data Structures", "Mark Weiss");
    addBook(3, "Clean Code", "Robert C. Martin");
    
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Lihat Buku\n2. Pinjam Buku\n3. Kembalikan Buku\n4. Keluar\nPilih: ";
        cin >> choice;
        
        if (choice == 1) {
            displayBooks();
        } else if (choice == 2) {
            int id;
            cout << "Masukkan ID Buku: ";
            cin >> id;
            borrowBook(id);
        } else if (choice == 3) {
            int id;
            cout << "Masukkan ID Buku: ";
            cin >> id;
            returnBook(id);
        }
    } while (choice != 4);
    
    cout << "Program selesai." << endl;
}