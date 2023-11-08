#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int Nilai [20];
	int Posisi [ 20 ];
	int i, N, Bilangan, Banyak= 0;
	bool Ketemu;
	
	cout<<"Praktikum Struktur Data"<<endl;
	cout<<"Tugas Praktikum Pertemuan 6 Lat6_2"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;
    
	cout<<"Masukan Banyaknya Bilangan = ";
	cin>>N;
	//Membaca elemen Array
	for(i=0; i<N; i ++){
		cout<<"Masukan elemen ke-"<<i<<" = ";
		cin>>Nilai [ i ];
	}
	//Mencetak Elemen Array
	cout<<"\n\nDeretan Bilangan =";
	for (i=0; i<N; i++)
		cout<<Nilai [ i ] <<" ";
		cout<<"\n\nMasukan Bilangan yang akan dicari = ";
		cin>> Bilangan;
	//Melakukan Pencarian
	for (i=0; i<N; i++){
		if (Nilai [ i ] ==Bilangan){
			Ketemu = true;
			Posisi [Banyak] = i;
			Banyak++;
		}
	}
	if (Ketemu){
		cout<<"Bilangan "<<Bilangan<<" DataDitemukan Sebanyak "<<Banyak;
		cout<<"\npada posisi ke =";
		for(i=0; i<Banyak; i ++)
		cout<<Posisi [ i ]<<" "; 
	}
	else{
		cout<<"Bilangan "<<Bilangan<<" tidak DataDitemukan";
 	}
	getch ();
}
