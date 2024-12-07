#include <iostream>
using namespace std;
int main()
{
	double totalBeli, potongan=0, jmlhBayar=0;
	cout<<"Total Pembelian Rp. ";
	cin>>totalBeli;
	if(totalBeli >=50000) {
		potongan = 0.2*totalBeli;
		cout<<"Besar Potongan Rp. "<<potongan<<endl;
	}
	jmlhBayar=totalBeli-potongan;	
	cout<<"Jumlah yang harus dibayarkan Rp. "<<jmlhBayar;
}
