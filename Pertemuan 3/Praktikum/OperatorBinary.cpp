#include <iostream> 
using namespace std;

int main() {
	int a, b, tambah, kurang, kali, bagi;
	
	cout << "Masukan Bilangan Pertama : ";
	cin >> a;
	cout << "Masukan Bilangan Kedua : ";
	cin >> b;
	
	tambah = a + b;
	kurang = a - b;
	kali = a * b;
	bagi = a / b;
	
	cout << "--------------------------------------------------" << endl;
	cout << "Hasil Penjumlahan " << a << " dan " << b << " : " << tambah << endl;
	cout << "Hasil Pengurangan " << a << " dan " << b << " : " << kurang << endl;
	cout << "Hasil Perkalian " << a << " dan " << b << " : " << kali << endl;
	cout << "Hasil Pembagian " << a << " dan " << b << " : " << bagi << endl;
}
