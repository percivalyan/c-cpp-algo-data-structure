#include<iostream>

using namespace std;

struct buah{
	string nama; 
	int harga;
};
buah data[10];

main(){
	int i;
	
	cout<<"Nama Buah : ";
	cin>>data[i].nama;

	cout<<"Masukkan Harga/kg : ";
	cin>>data[i].harga;
	cout<<endl;


	cout<<"|  Nama Buah  "<<"|  Harga  |"<<endl;
	cout<<"    "<<data[i].nama<<"      "<<"Rp."<<data[i].harga<<"/kg";	
}
