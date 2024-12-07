#include <iostream>
using namespace std;

int main() {
	int a, b;
	
	cout << "Perulangan WHILE" << endl;
	a = 1;
	while(a<=10){
		cout << a << endl << endl;
		a++;
	}
	
	cout << "Perulangan DO WHILE" << endl;
	b = 1;
	do {
		cout << b << endl;
		b++;
	} while (b<=10);
}
