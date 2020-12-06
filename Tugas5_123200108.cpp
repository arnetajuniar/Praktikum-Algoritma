#include <iostream>
using namespace std;
int main()
{
	int pilih,p,l,t,i,j,k;
	
	cout<< "Gambar Bangun Datar ===========\n";
	cout<< "1. Kotak Bolong\n";
	cout<< "2. Segitiga\n";
	cout<< "Pilih : ";cin>> pilih;
	cout<< endl;
	switch (pilih){
		case 1:
			cout<< "Panjang	: "; cin>> p;
			cout<< "Lebar	: "; cin>> l;
			for (i=0; i<p; ++i){
				for (j=0; j<l; ++j){
					if(i==0 || i==(p-1)){
						cout<< "* ";
					}
					else if(j==0 || j==(l-1)){
						cout<< "* ";
					}
					else {
						cout<< "  ";
					}
				}
				cout<< "\n";	
			}
			break;
		case 2:
			cout<< "Tinggi	: "; cin>> t;
			for(i=1;i<=t;i++){
				k=i;
				for(j=1;j<=i;j++){
					cout<<k<<" ";
					k=k+t-j;
				}
				cout<< endl;
			}
			break;
		default:
			cout<< "Pilihan tidak tersedia";
	}
	
	
	
	
	
	
	
	return 0;
}
