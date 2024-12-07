#include <iostream>
#include <string>

using namespace std;

int main() {
	string npm, nama, jurusan;
	
	cout << "Masukan NPM Anda : ";
	cin >> npm;
	cin.ignore();
	cout << "Masukan Nama Anda : ";
	getline(cin, nama);
	cout << "Masukan Jurusan Anda : ";
	getline(cin, jurusan);
	
	cout << "NPM : " << npm << endl;
	cout << "Nama : " << nama << endl;
	cout << "Jurusan : " << jurusan << endl;
	return 0;
}
