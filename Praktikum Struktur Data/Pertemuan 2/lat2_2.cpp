#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int Nilai[10] ;
	int i, Jumlah = 0;
	
	float Rata_Rata;
	
	//Membaca dan menghitung jumlah
	for (i=0 ; i<10 ; i++){
		cout<<"Masukan elemen ke-"<<i+1<<" = ";
		cin>>Nilai [ i ] ;
 		Jumlah+=Nilai [ i ];
	}

	Rata_Rata= ( float ) Jumlah / 10;

	//Mencetak Elemen Array
	cout<<"\n\nDeretan Bilangan = ";
	for ( i=0;i<10;i++){
 		cout<<Nilai[i]<<" " ;
	}

	//Mencetak Harga Jumlah
	cout<<"\nJumlah Bilangan = "<<Jumlah;
	cout<<"\nRata-Rata Bilangan = "<<Rata_Rata;
	getch ();
}
