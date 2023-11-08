#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int x=8, y;
	int *xPtr;
	xPtr = &x;
	y = *xPtr;
	
	cout << "Tugas Praktikum Latihan 4_2" << endl;
    cout << "Nama	: Ryanda Deanova" << endl;
    cout << "NIM	: 211011450036" << endl;
    cout << "Kelas 	: 04TPLP001" <<endl<<endl;
    
	cout<<"Nilai x = "<< x <<endl ;
	cout<<"Alamat x = "<<&x<<endl ;
	cout<<"Alamat x = "<<xPtr<<endl ;
	
	cout<<"Nilai yang disimpan pada alamat ";
	cout<<xPtr<<" adalah "<<y;
	getch();
}
