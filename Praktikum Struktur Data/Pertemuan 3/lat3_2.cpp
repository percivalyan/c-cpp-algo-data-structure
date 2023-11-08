#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
struct Tinggal {
	char Jalan [40] ;
	char Kota [15] ;
	char Pos [6] ; //Diubah dari 5 menjadi 6
};
struct Tgl_Lahir {
	int Tanggal ;
	int Bulan ;
	int Tahun ;
};
struct Mahasiswa {
	char NIM [13]; //Diubah dari 9 menjadi 13
	char Nama [25];
	Tinggal Alamat;
	Tgl_Lahir Lahir;
};
int main ( )
{
	cout<<"Ryanda Deanova_211011450036_04TPLP001"<<endl<<endl;
	Mahasiswa Mhs ;
	cout<<"NIM : "; cin.getline (Mhs.NIM, 13 ) ;
	cout<<"Nama : "; cin.getline (Mhs.Nama, 25 ) ;
	cout<<"Alamat : \n" ;
	cout<<"\tJalan : "; cin.getline ( Mhs.Alamat.Jalan, 40 ) ;
	cout<<"\tKota : "; cin.getline ( Mhs.Alamat.Kota, 15 ) ;
	cout<<"\tKode pos : "; cin.getline ( Mhs.Alamat.Pos, 6 ) ;
	cout<<"Tanggal Lahir : \n";
	cout<<"\tTanggal : "; cin>> Mhs.Lahir.Tanggal ;
	cout<<"\tBulan : "; cin>>Mhs.Lahir.Bulan ;
	cout<<"\tTahun : "; cin>>Mhs.Lahir.Tahun ;
	cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
	cout<<"NIM : "<<Mhs.NIM ;
	cout<<"\nNama : "<<Mhs.Nama ;
	cout<<"\nAlamat : ";
	cout<<"\n\tJalan : "<<Mhs.Alamat.Jalan;
	cout<<"\n\tKota : "<<Mhs.Alamat.Kota;
	cout<<"\n\tKode Pos : "<<Mhs.Alamat.Pos;
	cout<<"\nTanggal Lahir : "<<Mhs.Lahir.Tanggal<<"-";
	cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
	getch ();
}
