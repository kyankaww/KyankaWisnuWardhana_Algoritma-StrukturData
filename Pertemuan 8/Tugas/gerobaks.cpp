#include <iostream>
#include <string>
using namespace std;

int main() {
    const int banyakJenis = 3;
    char kode[banyakJenis] = {'D', 'P', 'S'};
    string jenis[banyakJenis] = {"Dada", "Paha", "Sayap"};
    int harga[banyakJenis] = {2500, 2000, 1500};

    int jumlahPotong[10], totalHarga[10];
    string namaPotong[10];
    char pilihKode;
    int banyakPesanan;

    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "---------------------\n";
    cout << "Kode   Jenis   Harga\n";
    cout << "---------------------\n";
    for (int i = 0; i < banyakJenis; ++i) {
        cout << "[" << kode[i] << "]    " << jenis[i] << "   Rp. " << harga[i] << "\n";
    }
    cout << "---------------------\n";

    cout << "\nBanyak Jenis: ";
    cin >> banyakPesanan;

    if (banyakPesanan <= 0) {
        cout << "Banyak jenis tidak boleh nol atau negatif!\n";
        return 1;
    }

    int totalSemua = 0;

    for (int i = 0; i < banyakPesanan; ++i) {
        cout << "\nJenis ke-" << (i + 1) << "\n";
        cout << "Jenis Potong [D/P/S]: ";
        cin >> pilihKode;

        bool validKode = false;
        for (int j = 0; j < banyakJenis; ++j) {
            if (toupper(pilihKode) == kode[j]) {
                namaPotong[i] = jenis[j];
                cout << "Banyak Potongan: ";
                cin >> jumlahPotong[i];
                totalHarga[i] = jumlahPotong[i] * harga[j];
                totalSemua += totalHarga[i];
                validKode = true;
                break;
            }
        }

        if (!validKode) {
            cout << "Kode tidak valid! Silakan ulangi.\n";
            --i;
        }
    }

    cout << "\n\tGEROBAK FRIED CHICKEN\n";
    cout << "------------------------------------------------\n";
    cout << "No.  Jenis Potong   Harga Satuan   Banyak Beli   Jumlah Harga\n";
    cout << "------------------------------------------------\n";
    for (int i = 0; i < banyakPesanan; ++i) {
        cout << (i + 1) << "    " << namaPotong[i] << "           Rp. " 
             << harga[0] << "          " << jumlahPotong[i] 
             << "           Rp. " << totalHarga[i] << "\n";
    }
    cout << "------------------------------------------------\n";
    cout << "                          Jumlah Bayar  : Rp. " << totalSemua << "\n";

    return 0;
}

