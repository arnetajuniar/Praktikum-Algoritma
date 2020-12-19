#include <iostream>
#define phi 3.14
using namespace std;

double r,t; //r=jari-jari, t=tinggi

	double hitungLuas(){
		double Luas;
		
		Luas = phi*r*r;
		return Luas;
	}
	double hitungKeliling(){
		double Keliling;
		
		Keliling = 2*phi*r;
		return Keliling;
	}
	double hitungVolume(){
		double Volume;
		
		Volume = phi*r*r*t;
		return Volume;
	}
	
int main()
{
		int pilih;
		char ulangi;
		
		cout<<"Hitung Lingkaran ==========\n";
		cout<<"1. Luas Lingkaran\n";
		cout<<"2. Keliling Lingkaran\n";
		cout<<"3. Volume Tabung\n";
		cout<<"Pilih: "; cin>> pilih;
	
		switch (pilih){
			case 1:
				cout<<"Jari - jari	: "; cin>> r;
				cout<<"Luas Lingkaran adalah "<<hitungLuas()<<endl;
				
				cin.get();
				break;
			case 2:
				cout<<"Jari - jari	: "; cin>> r;
				cout<<"Keliling Lingkaran adalah "<<hitungKeliling()<<endl;
				cin.get();
				break;
			case 3:
				cout<<"Jari - jari	: "; cin>> r;
				cout<<"Tinggi		: "; cin>> t;
				cout<<"Volume Tabung adalah "<<hitungVolume()<<endl;
				cin.get();
				break;
			default:
				cout<<"Input salah :)\n";
				cin.get();
				break;
		}
		cout<<"Ulangi program? (y/n) "; cin>>ulangi;
		while(true){
			if(ulangi=='y' || ulangi =='Y'){
			cout<<endl;
			cout<<main();
			return true;
			} else if(ulangi=='n' || ulangi =='N'){
				cout<<"\nProgram selesai, terima kasih :)"<<endl;
				cin.get();
				cin.get();
				return false;
			}
		}
	cin.get();	
	return 0;
}		
