#include <iostream>
using namespace std;

int main() {
	int x = 50; // Mendeklarasikan variabel x bertipe integer dan di inisialisasikan dengan nilai 50
	
	int a, b, c, d, e; // Mendeklarsikan variabel a, b, c, d, e. Variabel ini belum di inisialisasikan
	
	a = x > 5 + 5; // 5 + 5 akan di jalankan terlebih dahulu baru dibandingkan dengan x yang telah diinisialisasi (operator aritmatika memiliki prioritas lebih tinggi di banding operator perbandingan). x > 10 (50 > 10 atau 50 lebih besar dari 10) hasilnya akan diinisialisasikan ke variabel a yaitu 1(true)
	
	b = x > 100; // x > 100 (50 > 100 atau 50 lebih besar dari 100) hasilnya akan diinisialisasikan ke variabel b yaitu 0(false)
	
	c = a && b; // a && b (1(true) AND 0(false)) hasilnya akan diinisialisasikan ke variabel c yaitu 0(false) dikarenakan operasi AND hanya akan menghasilkan nilai true jika kedua operandnya bernilai 1(true)
	
	d = a || b; // a || b (1(true) OR 0(false)) hasilnya akan diinisialisasikan ke variabel d yaitu 1(true) dikarenakan operasi OR akan menghasilkan nilai true jika salah satu operandnya bernilai 1(true)
	
	e = !(c); // !(c) (!(0(false))) hasilnya akan diinisialisasikan ke variabel e yaitu 1(true) dikarenakan operasi negasi ini akan membalikan nilai logika suatu variabel
	
	cout << "\nNilai a = x < 5 + 5 = " << a << endl; // Cout ini akan mengoutput "Nilai a = x < 5 + 5 = (nilai a)" dan \n adalah simbuol untuk membuat garis baru
	cout << "\nNilai b = x > 100 = " << b << endl; // Cout ini akan mengoutput "Nilai b = x > 100 = (nilai b)" dan \n adalah simbuol untuk membuat garis baru
	cout << "\nNilai c = a && b = " << c << endl; // Cout ini akan mengoutput "Nilai c = a && b = (nilai c)" dan \n adalah simbuol untuk membuat garis baru
	cout << "\nNilai d = a || b = " << d << endl; // Cout ini akan mengoutput "Nilai d = a || b = (nilai d)" dan \n adalah simbuol untuk membuat garis baru
	cout << "\nNilai e = !(c) = " << e << endl; // Cout ini akan mengoutput "Nilai e = !(c) = (nilai e)" dan \n adalah simbuol untuk membuat garis baru
}
