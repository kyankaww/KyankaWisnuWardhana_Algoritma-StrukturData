#include <iostream>
using namespace std;

int main() {
	char operasi;
	float angka1, angka2, total;
	
	cout << "+ = Pertambahan" << endl;
	cout << "- = Pengurangan" << endl;
	cout << "* = Perkalian" << endl;
	cout << "/ = Pembagian" << endl;
	cout << "Pilih Jenis Operasi" << endl;
	cin >> operasi;
	cout << "Masukan Angka 1 : ";
	cin >> angka1;
	cout << "Masukan Angka 2 : ";
	cin >> angka2;
	
	if (operasi == '+') {
        total = angka1 + angka2;
    } else if (operasi == '-') {
        total = angka1 - angka2;
    } else if (operasi == '*') {
        total = angka1 * angka2;
    } else if (operasi == '/') {
        if (angka2 != 0) {
            total = angka1 / angka2;
        } else {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            return 0;
        }
    } else {
        cout << "Operasi tidak valid" << endl;
        return 0;
    }

	cout << angka1 << operasi << angka2 << " = " << total;
}
