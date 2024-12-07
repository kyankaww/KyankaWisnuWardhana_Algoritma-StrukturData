#include <iostream>
using namespace std;

int pangkat(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * pangkat(x, y - 1);
}

int main() {
    int x, y;

    cout << "Masukkan nilai x (basis): ";
    cin >> x;
    cout << "Masukkan nilai y (pangkat): ";
    cin >> y;

    cout << x << " pangkat " << y << " adalah: " << pangkat(x, y) << endl;

    return 0;
}

