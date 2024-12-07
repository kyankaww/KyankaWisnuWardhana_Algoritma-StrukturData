#include <iostream>
using namespace std;

int main() {
	int x, bil = 0;
	
	cout << "Masukan Nilangan Pembatas Akhir : ";
	cin >> x;
	
	do {
		if (bil >= x)
		break;
		cout << bil << " ";
	} while (bil += 4);
	
	getchar();
}
