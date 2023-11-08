#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int x=8, y=36; 
	int *xPtr, *yPtr;
	xPtr = &x;
	yPtr = &y;
	
	cout << "Tugas Praktikum Latihan 4_1" << endl;
    cout << "Nama	: Ryanda Deanova" << endl;
    cout << "NIM	: 211011450036" << endl;
    cout << "Kelas 	: 04TPLP001" <<endl<<endl;
    
	cout<<"Nilai x = "<< x <<endl ;
	cout<<"Alamat x = "<<&x<<endl ;
	cout<<"Alamat x = "<<xPtr<<endl ;
	cout<<"Nilai yang disimpan pada alamat " ;
	cout<<xPtr<<" adalah "<< *xPtr<<endl<<endl;
//	tambahan
//	cout<<endl<<endl;
//	cout<<"Nilai y = "<< y <<endl ;
//	cout<<"Alamat y = "<<&y<<endl ;
//	cout<<"Alamat y = "<<yPtr<<endl ;
//	cout<<"Nilai yang disimpan pada alamat " ;
//	cout<<yPtr<<" adalah "<< *yPtr;
	getch ();
}
