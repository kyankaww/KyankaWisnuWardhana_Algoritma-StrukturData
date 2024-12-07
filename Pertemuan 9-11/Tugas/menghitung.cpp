#include <iostream>
using namespace std;

int luasPersegi(int s);
int luasPersegiPanjang(int p, int l);
float luasTabung(float j, float t);
float volumeTabung(float j, float t);

int main() {
	int kode;
	cout << "----------------------------------------------------------------------------------";
	cout << "\nPROGRAM MENGHITUNG LUAS PERSEGI/LUAS PERSEGI PANJANG/VOLUME TABUNG/VOLUME TABUNG";
	cout << "\n--------------------------------------------------------------------------------";
	awal:
	cout << "\nSilahkan Pilih Apa yang Akan Dihitung";
	cout << "\n1 - Luas Persegi";
	cout << "\n2 - Luas Persegi Panjang";
	cout << "\n3 - Luas Tabung";
	cout << "\n4 - Volume Tabung";
	cout << "\nApa yang Akan Anda Pilih : ";
	cin >> kode;
	
	if (kode == 1) {
		for (int a = 0; a < 2; a++) {
			int s;
			cout << "\n-------------------------------";
			cout << "\nPROGRAM MENGHITUNG LUAS PERSEGI";
			cout << "\n-------------------------------";
			cout << "\nSilahkan Masukan Sisi : ";
			cin >> s;
			cout << "Dengan Sisi " << s << "Luas Perseginya Adalah " << luasPersegi(s);
		}
	} else if (kode == 2) {
		for (int a = 0; a < 2; a++) {
			int p, l;
			cout << "\n---------------------------------------";
			cout << "\nPROGRAM MENGHITUNG LUAS PERSEGI PANJANG";
			cout << "\n---------------------------------------";
			cout << "\nSilahkan Masukan Penjang : ";
			cin >> p;
			cout << "Silahkan Masukan Lebar : ";
			cin >> l;
			cout << "Dengan Panjang " << p << " dan Lebar " << l << " Luas Persegi Panjangnya Adalah " << luasPersegiPanjang(p, l);
		}
	} else if (kode ==3) {
		for (int a = 0; a < 2; a++) {
			int j, t;
			cout << "\n------------------------------";
			cout << "\nPROGRAM MENGHITUNG LUAS TABUNG";
			cout << "\n------------------------------";
			cout << "\nSilahkan Masukan Jari Jari Alas Tabung : ";
			cin >> j;
			cout << "Silahkan Masukan Tinggi Tabung : ";
			cin >> t;
			cout << "Dengan Jari Jari Alas Tabung " << j << " dan Tinggi Tabung " << t << " Luas Tabungnya Adalah " << luasTabung(j, t);
		}
	} else if (kode == 4) {
		for (int a = 0; a < 2; a++) {
			int j, t;
			cout << "\n--------------------------------";
			cout << "\nPROGRAM MENGHITUNG VOLUME TABUNG";
			cout << "\n--------------------------------";
			cout << "\nSilahkan Masukan Jari Jari Alas Tabung : ";
			cin >> j;
			cout << "Silahkan Masukan Tinggi Tabung : ";
			cin >> t;
			cout << "Dengan Jari Jari Alas Tabung " << j << " dan Tinggi Tabung " << t << " Volume Tabungnya Adalah " << volumeTabung(j, t);
		}
	} else {
		cout << "Kode yang Anda Input Tidak Valid!!";
		goto awal;
	}
	
}

int luasPersegi(int s){
	int hasil = s * s;
	
	return hasil;
}

int luasPersegiPanjang(int p, int l) {
	int hasil = p * l;
	
	return hasil;
}

float luasTabung(float j, float t) {
	float hasil = 2 * 3.14 * j * (j + t);
	
	return hasil; 
}

float volumeTabung(float j, float t) {
	float hasil = 3.14 * (j*j) * t;
	
	return hasil;
}


