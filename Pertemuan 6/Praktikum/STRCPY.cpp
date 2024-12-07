#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char huruf[20];
	char pindah[20];
	
	cout << "Masukan Sembarang Kata : ";
	cin >> huruf;
	
	strcpy(pindah, huruf);
	cout << "Pemindahannya : " << pindah;
	
	getchar();
}
