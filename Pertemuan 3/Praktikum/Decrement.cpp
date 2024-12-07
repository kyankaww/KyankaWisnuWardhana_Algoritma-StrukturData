#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	//Post Decrement (a--): variabel 'a' digunakan dulu, baru dikurang 1
	int b = a--;
	
	cout << "Post Decrement" << endl;
	cout << "Nilai a Setelah a-- : " << a << endl; // a sekarang 5
	cout << "Niali b : " << b << endl << endl; // b mengambil nilai sebelum a dikurang, jadi b = 5
	
	int c = 5;
	
	//Pre Decrement (a--): variabel 'a' dikurang dulu, baru digunakan
	int d = --c;
	
	cout << "Pre Decrement" << endl;
	cout << "Nilai c Setelah --c : " << c << endl; // c sekarang 4
	cout << "Niali d : " << d << endl; // d mengambil nilai setelah a dikurang, jadi d = 4
}
