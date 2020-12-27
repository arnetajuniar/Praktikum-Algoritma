#include <iostream>
using namespace std;
int main()
{
	int banyakAngka,i,max,min,selisih;
	float jumlah=0,rata_rata;
	
	cout<< "Masukkan banyak angka : "; cin>> banyakAngka;
	
	int angka[banyakAngka],input;
	
	for(i=0; i<banyakAngka; i++){
		cout<< "Angka ke-" << i+1 << " : ";
		cin	>> input;
		angka[i]=input;
		jumlah+=angka[i];
	} cout<< endl;
	
	cout<< "_____Hasil_____";
	cout<< "\nDeret       : ";
	for(i=0; i<banyakAngka; i++){
		cout << angka[i] << " ";
	}
	
	min=angka[0];
	max=angka[0];
	for(i=1; i<banyakAngka; i++){
		if(max < angka[i]){
			max=angka[i];
		} else if(min > angka[i]){
			min=angka[i];
		}
	}
	cout<< "\nMaksimum    : " << max;
	cout<< "\nMinimum     : " << min;
	rata_rata=jumlah/banyakAngka;
	cout<< "\nRata-rata   : " << rata_rata;

    max = angka[i+1]-angka[i];
    selisih = angka[i+1]-angka[i];

    for(i=0; i<banyakAngka; i++){
        if(i+1 >= banyakAngka){
           break;
        } else if (angka[i]<angka[i+1]){
            selisih=angka[i+1]-angka[i];
            if(max<angka[i+1]-angka[i]){
			max = angka[i+1]-angka[i];
			}
        } else if(angka[i]>angka[i+1]){
             selisih = angka[i]-angka[i+1];
             if(max<angka[i]-angka[i+1]){
				max = angka[i]-angka[i+1];
			} 
        }
	}
	cout<< "\nSelisih Max : " << max << endl;
	
cin.get();
cin.get();
return 0;	
}
