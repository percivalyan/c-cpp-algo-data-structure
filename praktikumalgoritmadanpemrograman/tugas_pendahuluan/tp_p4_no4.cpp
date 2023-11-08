#include<iostream>

using namespace std;

int main(){
	int angka;
	
	cout<<"Masukkan Angka (1-7) : ";
	cin>>angka;
	cout<<endl;
	
	switch (angka){
		case 1 : 
			cout<<"Pilihan anda Senin";
			break;
		case 2 : 
			cout<<"Pilihan anda Selasa";
			break ;
		case 3 : 
			cout<<"Pilihan anda Rabu";
			break;
		case 4 : 
			cout<<"Pilihan anda Kamis";
			break;
		case 5 : 
			cout<<"Pilihan anda Jumat";
			break;
		case 6 : 
			cout<<"Pilihan anda Sabtu";
			break;
		case 7 : 
			cout<<"Pilihan anda Minggu";
			break;
		default : 
			cout<<"Maaf anda memasukan kode yang salah";
	}
}
