#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char kode;
	cout<<"Masukkan Kode Barang [A..C] = ";
	cin>>kode;
	
	kode = toupper(kode);
	
	switch(kode){
		case 'A':
		cout<<"Alat Olahraga";
		break;
		case 'B':
		cout<<"Alat Elektronik";
		break;
		case 'C':
		cout<<"Alat Masak";
		break;
		default:
		cout<<"Anda Salah Memasukan Kode";
		break;
		}
}
