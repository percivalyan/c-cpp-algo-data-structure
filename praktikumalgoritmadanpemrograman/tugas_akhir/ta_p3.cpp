#include<iostream>

using namespace std;

int main(){
	int kode;
	string hari;
	
	cout<<"============================="<<endl;
	cout<<"Program Berdasarkan Algoritma"<<endl;
	cout<<"============================="<<endl<<endl;
	
	cout<<"Masukan Kode : ";
	cin>>kode;
	
	if(kode == 1){
		hari = "Senin";
	}else if(kode == 2){
		hari = "Selasa";
	}else if(kode == 3){
		hari = "Rabu";
	}else if(kode == 4){
		hari = "Kamis";
	}else if(kode == 5){
		hari = "Jumat";
	}else if(kode == 6){
		hari = "Sabtu";
	}else if(kode == 7){
		hari = "Minggu";
	}else{
		cout<<"Kode tidak ada";
	}
	
	cout<<"Kode\t : "<<kode<<endl;
	cout<<"Hari\t : "<<hari;
}

