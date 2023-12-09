#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int x=8, y;
	int *xPtr;
	xPtr = &x;
	y = *xPtr;
	
	cout << "Tugas Praktikum Pertemuan 4 lat4_2" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
	cout<<"Nilai x = "<< x <<endl ;
	cout<<"Alamat x = "<<&x<<endl ;
	cout<<"Alamat x = "<<xPtr<<endl ;
	
	cout<<"Nilai yang disimpan pada alamat ";
	cout<<xPtr<<" adalah "<<y;
	getch();
}
