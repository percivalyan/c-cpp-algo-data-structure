#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

main(){
	char nama [100];
	char nama2 [100];
	char hobi [100];
	char hobi2 [100];
	
	cout<<"========================"<<endl;
	cout<<"Program Input dan Output"<<endl;
	cout<<"========================"<<endl<<endl;
	
	cout<<"Masukan Nama Anda : ";
	gets(nama);
	strcpy(nama2, nama);
	
	cout<<"Masukkan Hobi Anda : ";
	gets(hobi);
	strcpy(hobi2, hobi);
	
	cout<<endl;
	cout<<"Hallo, nama saya "<<nama2<<" hobi saya "<<hobi2<<"."<<endl;
}

