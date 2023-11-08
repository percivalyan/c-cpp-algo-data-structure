#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int Nilai [ 20 ] ;
	int i, N, angka, Bilangan ;
	
	cout<<"Praktikum Struktur Data"<<endl;
	cout<<"Tugas Praktikum Pertemuan 6 Lat6_1"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;
    
	cout<<"Masukan Banyaknya Bilangan =";
	cin>>N;
	//Membaca elemen array
	for(i=0; i<N; i++){
		cout<<"Masukan elemen ke-"<<i+1<<" = "; //i+!
		cin>>Nilai [ i ] ;
	}
	//Mencetak elemen array
	cout<<"\n\nDeretan Bilangan =";
	for(i=0; i<N; i++)
		cout<<Nilai [ i ]<<" ";
		cout<<"\n\nMasukan Bilangan yang akan dicari = ";
		cin>>Bilangan ;
	//melakukan pencarian
		i=0;
	do{
		if(Nilai [ i ]==Bilangan)
			angka = Nilai [i];
			i++;
	}
	while (i<N);
	if (angka==Bilangan)
		cout<<"Bilangan "<<Bilangan <<" DataDitemukan ";
	else
		cout<<"Bilangan "<<Bilangan<<" tidak DataDitemukan "; 
	getch ();
}
