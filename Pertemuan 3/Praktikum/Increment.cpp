#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	//Post Increment (a++): variabel 'a' digunakan dulu, baru ditambah 1
	int b = a++;
	
	cout << "Post Increment" << endl;
	cout << "Nilai a Setelah a++ : " << a << endl; // a sekarang 6
	cout << "Niali b : " << b << endl << endl; // b mengambil nilai sebelum a ditambah, jadi b = 5
	
	int c = 5;
	
	//Pre Increment (a++): variabel 'a' ditambah dulu, baru digunakan
	int d = ++c;
	
	cout << "Pre Increment" << endl;
	cout << "Nilai c Setelah ++c : " << c << endl; // c sekarang 6
	cout << "Niali d : " << d << endl; // d mengambil nilai setelah a ditambah, jadi d = 6
}
