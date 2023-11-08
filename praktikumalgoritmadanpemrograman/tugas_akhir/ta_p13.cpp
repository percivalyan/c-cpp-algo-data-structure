#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[10], i, angka, data=0;
	
	cout<<"=================================="<<endl;
	cout<<"Program Menyimpan dan Mencari Data"<<endl;
	cout<<"=================================="<<endl<<endl;
	
	for(i=0; i<10; i++){
		cout<<"Masukan Angka yang ingin disimpan : ";
		cin>>a[i];
	}
	
	cout<<endl;
	cout<<"Angka-Angka yang telah diinputkan : ";
	for(i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;
		
	cout<<"Masukan angka yang dicari : ";
	cin>>angka;
	cout<<endl;
	for(i=0; i<10; i++){
		if(a[i] == angka){
			data = 1;		
		}
	}
	
	if(data != 1){
		cout<<"Data Tidak Ditemukan"<<endl;
	}else{
		cout<<"Data Ditemukan"<<endl;
	}
}
