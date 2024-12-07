#include <iostream>
using namespace std;

int main() {
	int number = 0, sum;
	
	do {
		sum += number;
		
		cout << "Masukan Angka : ";
		cin >> number;
	} while (number >= 1);
	
	cout << "\nHasil Penjumlahan Adalah : " << sum;
}
