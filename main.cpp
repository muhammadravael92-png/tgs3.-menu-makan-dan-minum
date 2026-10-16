#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi untuk menampilkan daftar menu
void tampilkanMenu() {
    cout << "\n=================================\n";
    cout << "      DAFTAR MENU MINI KASIR     \n";
    cout << "=================================\n";
    cout << " Makanan:\n";
    cout << " 1. Soto  - Rp 15.000\n";
    cout << " 2. Rawon - Rp 20.000\n";
    cout << " 3. Pecel - Rp 10.000\n";
    cout << " Minuman:\n";
    cout << " 4. Teh   - Rp  3.000\n";
    cout << " 5. Kopi  - Rp  5.000\n";
    cout << "=================================\n";
}

// Fungsi untuk menghitung subtotal berdasarkan pilihan dan jumlah
int hitungSubtotal(int pilihan, int jumlah) {
    int harga = 0;
    switch (pilihan) {
        case 1: harga = 15000; break;
        case 2: harga = 20000; break;
        case 3: harga = 10000; break;
        case 4: harga = 3000;  break;
        case 5: harga = 5000;  break;
        default: 
            cout << "Pilihan tidak valid!\n";
            return 0;
    }
    return harga * jumlah;
}

int main() {
    int pilihan, jumlah, total = 0, bayar, kembalian;
    char lanjut;

    cout << "=================================\n";
    cout << "      PROGRAM LANJUTAN KASIR     \n";
    cout << "=================================\n";

    do {
        tampilkanMenu();
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
            cout << "Masukkan jumlah: ";
            cin >> jumlah;
            total += hitungSubtotal(pilihan, jumlah);
        } else {
            cout << "Menu tidak tersedia, silakan pilih ulang.\n";
        }

        cout << "\nTambah pesanan lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "\n---------------------------------\n";
    cout << "Total Belanja       : Rp " << total << endl;
    cout << "Masukkan Uang Bayar : Rp ";
    cin >> bayar;

    if (bayar >= total) {
        kembalian = bayar - total;
        cout << "Kembalian           : Rp " << kembalian << endl;
        cout << "Terima kasih telah berbelanja!\n";
    } else {
        cout << "Uang Anda kurang! Transaksi dibatalkan.\n";
    }
    cout << "=================================\n";

    return 0;
}
