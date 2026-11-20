#include <iostream>
using namespace std;

int main() {
    string menu[5] = {"Soto", "Rawon", "Pecel", "Teh", "Kopi"};
    int harga[5] = {15000, 20000, 10000, 3000, 5000};
    int pilih, jumlah;
    char ulang;

    do {
        cout << "\n=== MINI KASIR ===\n";

        for (int i = 0; i < 5; i++)
            cout << i + 1 << ". " << menu[i]
                 << " - Rp" << harga[i] << endl;

        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih < 1 || pilih > 5) {
            cout << "Menu tidak tersedia!\n";
            continue;
        }

        cout << "Jumlah: ";
        cin >> jumlah;

        if (jumlah <= 0) {
            cout << "Jumlah tidak valid!\n";
            continue;
        }

        cout << "Total: Rp"
             << harga[pilih - 1] * jumlah << endl;

        cout << "Ulangi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
