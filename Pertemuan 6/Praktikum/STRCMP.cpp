#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char a1[] = "IBIK";
	char a2[] = "Ibik";
	char a3[] = "IBIK";
	
	cout << "Hasil Perbandingan " << a1 << " dan " << a2 << " -> ";
	cout << strcmp(a1, a2) << endl;
	
	cout << "Hasil Perbandingan " << a2 << " dan " << a1 << " -> ";
	cout << strcmp(a2, a1) << endl;
	
	cout << "Hasil Perbandingan " << a1 << " dan " << a3 << " -> ";
	cout << strcmp(a1, a3) << endl;
	
	getchar();
}
