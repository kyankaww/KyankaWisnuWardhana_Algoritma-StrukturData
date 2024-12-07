#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int jariCircle, luasCircle, jariTube, tinggiTube, volumeTube;
	float phi = 3.14286;
	
	cout << "Masukan Jari Jari Lingkaran : ";
	cin >> jariCircle;
	
	luasCircle = phi * jariCircle * jariCircle;
	
	cout << "Diketahui Luas LingKaran : " << endl;
	cout << "Jari Jari : " << jariCircle << endl;
	cout << "Phi       : " << phi << endl;
	cout << "L         : Phi x r x r" << endl;
	cout << "L         : " << phi << " x " << jariCircle << " x " << jariCircle << endl;
	cout << "L         : " << luasCircle << endl;
	cout << "Luas Lingkaran Dengan Jari Jari " << jariCircle << " cm adalah = " << luasCircle << " cm" << endl << endl;
	
	getch();
	
	cout << "Masukan Jari Jari Tabung : ";
	cin >> jariTube;
	cout << "Masukan Tinngi Tabung : ";
	cin >> tinggiTube;
	
	volumeTube = phi * jariTube * jariTube * tinggiTube;
	
	cout << "Diketahui Volume Tabung : " << endl;
	cout << "Jari Jari : " << jariTube << endl;
	cout << "Phi       : " << phi << endl;
	cout << "L         : Phi x r x r" << endl;
	cout << "L         : " << phi << " x " << jariTube << " x " << jariTube << " x " << tinggiTube << endl;
	cout << "L         : " << volumeTube << endl;
	cout << "Luas Lingkaran Dengan Jari Jari " << jariTube << " cm dan Tinggi " << tinggiTube << " adalah = " << volumeTube << " cm";
}
