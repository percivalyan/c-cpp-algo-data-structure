#include<iostream>

using namespace std;

int angka(int a){
	if (a%2==0){
		cout<<a<<" "<<"adalah bilangan genap"<<endl;
	} else{
		cout<<a<<" "<<"adalah bilangan ganjil"<<endl;
	}
}

int main(){
	int a;
	
	cout<<"================================================================"<<endl;
	cout<<"Program Menampilkan Bilangan Genap dan Ganjil Menggunakan Fungsi"<<endl;
	cout<<"================================================================"<<endl;
	cout<<endl;
	
	cout<<"Masukan Angka : ";
	cin>>a;
	
	cout<<endl;
	angka(a);
}

