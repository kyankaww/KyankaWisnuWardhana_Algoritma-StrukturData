#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, rata;
    string nama, hadiah;
    int kode_hadiah;

    cout << "Program Hitung Nilai Rata-Rata" << endl;
    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Perbandingan I : ";
    cin >> n1;
    cout << "Nilai Perbandingan II : ";
    cin >> n2;
    cout << "Nilai Perbandingan III : ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    if (rata >= 85) {
        kode_hadiah = 1;
    } else if (rata >= 70) {
        kode_hadiah = 2;
    } else {
        kode_hadiah = 3;
    }

    switch (kode_hadiah) {
        case 1:
            hadiah = "Komputer Core i5";
            break;
        case 2:
            hadiah = "Uang Sebesar Rp.2.000.000";
            break;
        default:
            hadiah = "Hiburan";
            break;
    }

    cout << "Siswa Bernama " << nama << endl;
    cout << "Memperoleh Nilai Rata-Rata " << rata << " dari Hasil Perlombaan yang Diikutinya" << endl;
    cout << "Hadiah yang Didapat adalah " << hadiah << endl;

    return 0;
}

