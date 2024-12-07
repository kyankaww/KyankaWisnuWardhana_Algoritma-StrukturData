#include <iostream>

using namespace std;

int main() {
	float n1, n2, n3, rata;
	string nama, hadiah;
	
	cout << "Program Hitung Nilai Rata Rata" << endl;
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
		hadiah = "Komputer Core i5";
	} else if (rata >= 70) {
		hadiah = "Uang sebesar Rp. 2.000.000";
	} else {
		hadiah = "Hiburan";
	}
	cout << "Siswa Bernama " << nama << endl;
	cout << "Memperoleh Nilai Rata Rata " << rata << " dari Hasil Perlombaan yang Diikutinya" << endl;
	cout << "Hadiah yang Didapat adalah " << hadiah;
}
