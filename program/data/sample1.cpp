#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int stock;
};

vector<Product> products;
double totalRevenue = 0;

void addProduct(int id, string name, double price, int stock) {
    products.push_back({id, name, price, stock});
}

void displayProducts() {
    cout << "\nDaftar Produk:\n";
    cout << left << setw(5) << "ID" << setw(20) << "Nama" << setw(10) << "Harga" << "Stok" << endl;
    for (const auto &product : products) {
        cout << left << setw(5) << product.id << setw(20) << product.name 
             << setw(10) << product.price << product.stock << endl;
    }
}

void sellProduct(int id, int quantity) {
    for (auto &product : products) {
        if (product.id == id) {
            if (product.stock >= quantity) {
                product.stock -= quantity;
                totalRevenue += product.price * quantity;
                cout << "\nPenjualan berhasil: " << quantity << " " << product.name << " terjual." << endl;
            } else {
                cout << "\nStok tidak mencukupi!" << endl;
            }
            return;
        }
    }
    cout << "\nProduk tidak ditemukan!" << endl;
}

void showTotalRevenue() {
    cout << "\nTotal Pendapatan: Rp " << totalRevenue << endl;
}

int main() {
    addProduct(1, "Buku", 15000, 10);
    addProduct(2, "Pensil", 5000, 20);
    addProduct(3, "Penghapus", 2000, 15);
    
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Lihat Produk\n2. Jual Produk\n3. Lihat Pendapatan\n4. Keluar\nPilih: ";
        cin >> choice;
        
        if (choice == 1) {
            displayProducts();
        } else if (choice == 2) {
            int id, quantity;
            cout << "Masukkan ID Produk: ";
            cin >> id;
            cout << "Masukkan Jumlah: ";
            cin >> quantity;
            sellProduct(id, quantity);
        } else if (choice == 3) {
            showTotalRevenue();
        }
    } while (choice != 4);
    
    cout << "Program selesai." << endl;
}