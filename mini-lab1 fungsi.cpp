#include<iostream>
using namespace std;

double tambah(double a, double b){
	return a + b;
}
double kurang(double a, double b){
	return a - b;
}
double kali(double a, double b){
	return a * b;
}
double bagi(double a, double b){
	if(b == 0){
		cout <<"Tidak bisa membagi dengan nol!"<<endl;
		return 0;
	}
	return a / b;
}

void menu(){
	cout <<endl;
	cout <<"==== Kalkulator Sederhana ===="<<endl;
	cout <<"1. Tambah"<<endl;
	cout <<"2. Kurang"<<endl;
	cout <<"3. Kali"<<endl;
	cout <<"4. Bagi"<<endl;
	cout <<"Pilihan : ";
}

int main(){
	double a, b, hasil;
	int pilih;
	char ulang;
	
	do{
		cout <<endl;
		cout <<"Masukkan angka pertama : ";
		cin >> a;
		cout <<"Masukkan angka kedua : ";
		cin >> b;
		
		menu();
		cin >> pilih;
		
		switch(pilih){
			case 1: hasil = tambah(a, b); break;
			case 2: hasil = kurang(a, b); break;
			case 3: hasil = kali(a, b); break;
			case 4: hasil = bagi(a, b); break;
			default:
				cout <<"Menu tidak valid."<<endl;
				continue;
		}
		
		cout <<"Hasil = " << hasil <<endl;
		cout <<"Hitung lagi? (y/n) : ";
		cin >> ulang;
		
	}while(ulang == 'y' || ulang == 'Y');
	
	cout <<"Program selesai."<<endl;
	return 0;
}
