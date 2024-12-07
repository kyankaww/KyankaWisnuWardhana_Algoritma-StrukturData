#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char kata_1[20];
	char kata_2[20];
	
	cout << "Masukan Kata 1 : ";
	cin >> kata_1;
	
	cout << "Masukan Kata 2 : ";
	cin >> kata_2;
	
	cout << "Panjang Kata yang Diinputkan Adalah : " << endl;
	cout << kata_1 << " = " << strlen(kata_1) << endl;
	cout << kata_2 << " = " << strlen(kata_2) << endl;
	
	getchar();
}
