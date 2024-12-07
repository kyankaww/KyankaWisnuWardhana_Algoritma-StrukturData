#include <iostream>
using namespace std;

void penjumlahan(int &a) {
	a++;
}

int main() {
	int angka = 1;
	penjumlahan(angka);
	cout << angka;
}
