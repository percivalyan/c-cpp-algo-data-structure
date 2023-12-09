#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int Nilai [20];
	int i, N, Terbesar;
	
	cout << "Tugas Praktikum Pertemuan 2 lat2_3" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

	cout<<"Masukan Banyaknya Bilangan = ";
	cin>>N;
	cout<<endl;
	
	//Membaca elemen array
	for(i=0; i<N; i++){
		cout<<"Masukan elemen ke-"<<i+1<<" = ";
		cin>>Nilai [i];
	}
	
	Terbesar = Nilai [1]; //elemen pertama dibuat sebagai Terbesar
	for (i=1; i<N; i++){
		if (Nilai [i]>Terbesar)
			Terbesar = Nilai [i];
	}

	//Mencetak Bilangan Terbesar
	cout<<"\nBilangan Terbesar = "<< Terbesar;
	getch();
}
