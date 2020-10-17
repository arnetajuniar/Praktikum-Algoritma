#include <iostream>
using namespace std;
int main()
{
	string nama;
	char NIM[10];
	float x,y,rata_rata;
	
	cout<< "Nama	: ";
	getline(cin,nama);
	cout<< "NIM     : "; cin>> NIM;
	cout<< "UTS 	: "; cin>> x;
	cout<< "UAS 	: "; cin>> y;
	rata_rata = (x + y)/2;
	
	cout<< "\nHai, nama saya " << nama;
	cout<< ", NIM " << NIM;
	cout<< "\nNilai akhir saya " << rata_rata;

}
