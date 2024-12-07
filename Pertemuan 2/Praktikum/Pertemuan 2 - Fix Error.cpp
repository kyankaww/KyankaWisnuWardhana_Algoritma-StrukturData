#include <iostream>
#include <conio.h>
#define harga 4500.02
using namespace std;

main(){
	float jumlah, total;
	
	cout << "Masukan Jumlah Barang : ";
	cin >> jumlah;
	
	total = jumlah * harga;
	
	cout << "\nHarga Yang Harus Dibayar Adalah : " << total;
	
	getch();	
}

