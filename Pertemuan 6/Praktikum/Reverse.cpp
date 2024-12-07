#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char kalimat[30];
	
	cout << "Masukan Kalimat : ";
	cin.getline(kalimat, sizeof(kalimat));
	
	cout << "Kalimat Terbalik : ";
	
	for (int i = strlen(kalimat) - 1; i >= 0; i--){
		cout << kalimat[i];
	}
	
	cout << endl;
}
