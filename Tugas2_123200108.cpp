#include <iostream>
using namespace std;
int main()
{
	int umur1,umur2,umur3,umur4;
	int biaya1,biaya2,biaya3,biaya4;
	int tagihan;
	
	cout << "Umur Ayah	: "; cin >> umur1;
	if (umur1 <= 12) {
		biaya1 = 15000;
	} else if (umur1 <= 20){
		biaya1 = 20000;
	} else {
		biaya1 = 30000;
	} 
	cout << "Umur Ibu	: "; cin >> umur2;
	if (umur2 <= 12) {
		biaya2 = 15000;
	} else if (umur2 <= 20){
		biaya2= 20000;
	} else {
		biaya2 = 30000;
	} 
	cout << "Umur Anak 1	: "; cin >> umur3;
	if (umur3 <= 12) {
		biaya3 = 15000;
	} else if (umur3 <= 20){
		biaya3= 20000;
	} else {
		biaya3 = 30000;
	} 
	cout << "Umur Anak 2	: "; cin >> umur4;
	if (umur4 <= 12) {
		biaya4 = 15000;
	} else if (umur4 <= 20){
		biaya4= 20000;
	} else  {
		biaya4 = 30000;
	} 

	tagihan = (biaya1+biaya2+biaya3+biaya4)*30;
	cout<< "Tagihan satu bulan adalah Rp." << tagihan <<endl;
}