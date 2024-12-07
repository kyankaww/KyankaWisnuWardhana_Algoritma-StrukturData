#include <iostream>
using namespace std;

void cekBilangan(int bilangan, bool *check);

int main() {
	int bilangan;
    bool check;
	cout << "-----------------";
	cout << "\nPROGRAM POINTER";
	cout << "\n---------------";
	cout << "\nSilahkan Masukan Bilangan : ";
	cin >> bilangan;
	cekBilangan(bilangan, &check);
	
	if (check) {
        cout << endl << bilangan << " " << bilangan + 1;
    } else {
        cout << endl << bilangan;	
    }
}

void cekBilangan(int bilangan, bool *check) {
    cout << "Angka yang Anda input: " << bilangan << endl;
     if (bilangan % 2 == 0) {
        *check = true;
    } else {
        *check = false;
    }
}
