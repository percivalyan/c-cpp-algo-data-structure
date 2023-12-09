#include <iostream>
#include <conio.h>
using namespace std;

int main(){	
	int Nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3} ;
	int i, Jumlah = 0;
	float Rata_Rata;
	
	cout << "Tugas Praktikum Pertemuan 2 lat2_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
	
	//Menghitung jumlah
	for (i=0 ; i <10 ; i++)
		Jumlah += Nilai [ i ];
		Rata_Rata =( float ) Jumlah / 10;
		
	//Mencetak Elemen Array
	cout<<"Deretan Bilangan = ";
	for ( i=0;i<10;i++)
		cout<<Nilai[i]<<" " ;
		
	//Mencetak Harga Jumlah
	cout<<"\nJumlah Bilangan ="<<Jumlah;
	cout<<"\nRata-Rata Bilangan = "<<Rata_Rata;
	getch ();
}
