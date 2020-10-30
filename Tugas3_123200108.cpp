#include <iostream>
using namespace std;
int main ()
{	
	string user,pass;
	int pilih;
	float h,uts,uas;
	float h2,uts2,uas2;
	float rata_rata,rata_rata2;

	cout << "Login Akun ===============\n";
	cout << "Username	: "; cin >> user; 	//user: arnetajs
	cout << "Password	: "; cin >> pass; 	//pass: inipassword123
	cout << "==========================\n";
	
	if (user == "arnetajs") {
		if (pass == "inipassword123"){
			cout << "Login berhasil!\n";
			cout << endl;
			cout << "Input Nilai mata kuliah\n";
			cout << "1. Algoritma dan Pemrograman\n";
			cout << "2. Kalkulus\n";
			cout << "Pilih : "; cin >> pilih;
			switch (pilih) {
				case 1 :
					cout << "Nilai Harian	: ";
					cin >> h;
					cout << "Nilai UTS	: ";
					cin >> uts;
					cout << "Nilai UAS	: ";
					cin >> uas;
					break;
				case 2 :
					cout << "Nilai Harian	: ";
					cin >> h2;
					cout << "Nilai UTS	: ";
					cin >> uts2;
					cout << "Nilai UAS	: ";
					cin >> uas2;
					break;
				default :
					cout << "Input Anda salah!" << endl;
			}
			rata_rata = (h+uts+uas)/3;
			rata_rata2 = (h2+uts2+uas2)/3;
			
			if (rata_rata >= 80 && rata_rata <= 100){
				cout << "\nAnda lulus Algoritma dan Pemrograman dengan nilai "
				<< rata_rata;
			}
			else if (rata_rata > 0){
				cout << "\nAnda tidak lulus Algoritma dan Pemrograman dengan nilai "
				<< rata_rata;
			}
			else if (rata_rata2 >= 80 && rata_rata2 <= 100){
				cout << "\nAnda lulus Kalkulus dengan nilai " << rata_rata2;
			}
			else {
				cout << "\nAnda tidak lulus Kalkulus dengan nilai " << rata_rata2;
			}
			
		}
		else {
			cout << "Password Anda salah!";
		}
	}
	else if (pass == "inipassword123"){
		cout << "Username Anda salah!";
	}
	else {
		cout << "Username dan password Anda salah!";
	}
}
