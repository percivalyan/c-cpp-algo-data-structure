#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int main (){
	int Nilai [ ] = {45, 23, 50, 8, 12, 10, 15} ;
	int *Ptr_Nilai ;
	int i;
	Ptr_Nilai = Nilai ;
	
	cout << "Tugas Praktikum Pertemuan 4 lat4_3" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
	cout<<"\nNilai Ptr_Nilai"<<Ptr_Nilai;
	cout<<"\nAlamat array Nilai"<<Ptr_Nilai;
	cout<<"\nNilai yang ada pada alamat "<<Ptr_Nilai<<"adalah "<<*Ptr_Nilai;
	cout<<"\nElemen Array indeks pertama : "<<Nilai [0];
	cout<<"\n\nElemen Array (dgn Array ) : ";
	for ( i=0;i<7;i++)
		cout<<Nilai [i]<<" "; //mencetak elemen array
		cout<<"\n\nElemen Array (dgn Pointer) : ";
	for(i=0;i<7;i++)
		cout<<*( Nilai+i )<<" "; //mencetak elemen array getch ( ) ;
}
