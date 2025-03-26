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

void addProduct() {
    Product product;
    cout << "\nMasukkan ID produk: ";
    cin >> product.id;
    cout << "Masukkan nama produk: ";
    cin >> product.name;
    cout << "Masukkan harga produk: ";
    cin >> product.price;
    cout << "Masukkan stok produk: ";
    cin >> product.stock;
    products.push_back(product);
    cout << "\nProduk berhasil ditambahkan!" << endl;
}

void displayProducts() {
    cout << "\nDaftar Produk:\n";
    cout << left << setw(5) << "ID" << setw(20) << "Nama" << setw(10) << "Harga" << "Stok" << endl;
    for (const auto &product : products) {
        cout << left << setw(5) << product.id << setw(20) << product.name 
             << setw(10) << product.price << product.stock << endl;
    }
}

void sellProduct() {
    int id, quantity;
    cout << "\nMasukkan ID produk: ";
    cin >> id;
    cout << "Masukkan jumlah produk yang dijual: ";
    cin >> quantity;

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

int main() {
    int program;

    do {
        string p_list =
            "ㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤPT. INDO BATAM EKATAMAㅤㅤㅤㅤㅤㅤㅤㅤㅤㅤ"
            "=====================================================\n"
            "ㅤ▶ [1] View Table\n"
            "ㅤ▶ [2] Add Stock Product\n"
            "ㅤ▶ [3] Sell Product\n"
            "ㅤ▶ [00] Exit\n"
            "=====================================================\n";

        cout << p_list << endl << "Please select a program to run: ";
        cin >> program;
        
        switch (program) {
            case 1:
                displayProducts();
                break;
            case 2:
                addProduct();
                break;
            case 3:
                sellProduct();
                break;
            default:
                cout << "Invalid selection. Please choose a valid program.\n";
                break;
        }

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    } while (program != 00);
}