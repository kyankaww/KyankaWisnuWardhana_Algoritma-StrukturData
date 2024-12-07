#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    char operasi;

    cout << "Program Perhitungan Matriks" << endl;
    cout << "---------------------------" << endl;
	cout << "Jenis Jenis Operasi:";
	cout << "\n+ = Penjumlahan";
	cout << "\n- = Pengurangan";
	cout << "\nx = Perkalian";
	cout << "\nMasukan Jenis Operasi :";
	cin >> operasi;
    cout << "Masukkan Jumlah Baris : "; 
    cin >> rows;
    cout << "Masukkan Jumlah Kolom : "; 
    cin >> cols;

    int MatrixX[rows][cols], MatrixY[rows][cols];

    cout << "\nMatrix X : " << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Matrix X" << "[" << i << "][" << j << "] : ";
            cin >> MatrixX[i][j];
        }
    }

    cout << "\nMatrix Y :" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Matrix Y" << "[" << i << "][" << j << "] : ";
            cin >> MatrixY[i][j];
        }
    }
    
    if (operasi == '+') {
    	cout << "\nHasil Penjumlahan Matrix X dan Matrix Y : " << endl;
    	for (i = 0; i < rows; i++) {
        	for (j = 0; j < cols; j++) {
            	cout << MatrixX[i][j] + MatrixY[i][j] << "\t";
        	}
        	cout << endl;
    	}
	} else if (operasi == '-') {
		cout << "\nHasil Pengurangan Matrix X dan Matrix Y : " << endl;
    	for (i = 0; i < rows; i++) {
        	for (j = 0; j < cols; j++) {
            	cout << MatrixX[i][j] - MatrixY[i][j] << "\t";
        	}
        	cout << endl;
    	}
	} else if (operasi == 'x') {
		cout << "\nHasil Perkalian Matrix X dan Matrix Y : " << endl;
    	for (i = 0; i < rows; i++) {
        	for (j = 0; j < cols; j++) {
            	cout << MatrixX[i][j] * MatrixY[i][j] << "\t";
        	}
        cout << endl;
    	}
	} else {
		cout << "Ga Bisa Dongs";
	}

    return 0;
}

