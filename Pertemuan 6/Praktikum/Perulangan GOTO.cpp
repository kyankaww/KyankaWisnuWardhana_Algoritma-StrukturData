#include <iostream>
using namespace std;

int main() {
	char ulang;
	
	awal:
		
	cout << "Program Perulangan Menggunakan Go To " << endl << endl;
	cout << "Ingin Mengulang Perintah? ( y / t ) : ";
	cin >> ulang;
	
	if (ulang == 'Y' || ulang == 'y') {
		goto awal;
	} else if (ulang == 'T' || ulang == 't') {
		goto akhir;
	} else {
		cout << "Inputan Salah" << endl;
	}
	
	akhir:
		
	cout << "Program Selesai";
}
