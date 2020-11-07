#include <iostream>
using namespace std;
int main()
{
	int n,m,pilih,a;
	
	cout<< "=== Perkalian & Perpangkatan ===" << endl;
	cout<< "1. Perkalian" << endl;
	cout<< "2. Perpangkatan" << endl;
	cout<< "Pilih: "; cin>> pilih;
	switch (pilih){
		case 1 :
			cout<< "Input angka N : "; cin>> n;
			cout<< "Input angka M : "; cin>> m;
			cout<< "Hasil " << n << " x " << m << endl;
			
			a = m;
			cout<< m;
			for(int i=1;i<n;i++){
				cout<< " + " << m;
				a = a + m;
			}
			cout<< " = " << a << endl;
	
			break;
	
		case 2 :
			cout<< "Input angka N : "; cin>> n;
			cout<< "Input angka M : "; cin>> m;
			cout<< "Hasil " << n << " ^ " << m << endl;
			
			a = n;
			cout<< n;
			for(int i=1;i<m;i++){
				cout<< " x " << n;
				a = a * n;
			}
			cout<< " = " << a << endl;
		
			break;
	}	
	cout<< endl;
	cout<< "========= Terima Kasih =========";
}
