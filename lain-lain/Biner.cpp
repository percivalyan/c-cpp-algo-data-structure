/*
Susunlah algoritma dan program C++ untuk menginput sebuah bilangan bulat positif maksimum 255 yang
menyatakan suatu bilangan desimal. Kemudian konversikan dan cetak kedalam bentuk biner.
*/

#include<iostream>
using namespace std;

int main(){
	cout<<"Menginput sebuah bilangan bulat positif"<<endl;
	
	int a[10], b, c;
	
	cout<<"Masukkan Bilangan Positif Desimal : ";
	cin>>b;
	
	for(c=0; b>0; c++){
		a[c]=b%2;
		b=b/2;
	}
	cout<<"Bilangan Biner : ";
	
	for(c=c-1; c>=0; c--){
		cout<<a[c];
	}
}
