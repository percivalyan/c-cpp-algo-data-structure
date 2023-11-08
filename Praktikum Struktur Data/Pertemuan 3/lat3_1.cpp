#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct Mahasiswa
{
	char NIM [13] ; //Diubah dari 9 menjadi 13
	char Nama [25] ;
	char Alamat[40] ;
	short Umur ;
};

int main ()
{
	cout<<"Ryanda Deanova_211011450036_04TPLP001"<<endl<<endl;
	Mahasiswa Mhs;
	cout<<"NIM	: " ;
	cin.getline (Mhs.NIM,13);
	cout<<"Nama 	: ";
	cin.getline (Mhs.Nama,25);
	cout<<"Alamat 	: ";
	cin.getline (Mhs.Alamat,40);
	cout<<"Umur 	: ";
	cin>>Mhs.Umur ;
	cout<<"\nCetak	: ";
	cout<<"\nNIM 	: "<< Mhs.NIM;
	cout<<"\nNama	: "<< Mhs.Nama;
	cout<<"\nAlamat	: "<< Mhs.Alamat;
	cout<<"\nUmur 	: "<< Mhs.Umur;
	getch ();
}
