#include <iostream>
using namespace std;

int main() {
    int batasAtas, num, i;
    
    cout << "Masukkan batas atas untuk mencari bilangan prima: ";
    cin >> batasAtas;

    cout << "Bilangan prima antara 1 dan " << batasAtas << " adalah: " << endl;

    for (num = 2; num <= batasAtas; num++) {
        bool prima = true;

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

