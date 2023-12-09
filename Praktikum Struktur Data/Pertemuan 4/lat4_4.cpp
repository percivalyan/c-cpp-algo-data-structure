#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	int x= 8;
	int *xPtr1;
	int **xPtr2;
	xPtr1 = &x;
	xPtr2 = &xPtr1;
 
	cout << "Tugas Praktikum Pertemuan 4 lat4_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
	cout<<"Nilai x = "<<x<<endl;
	cout<<"Nilai x = "<<*xPtr1<<endl;
	cout<<"Nilai x = "<<*xPtr2<<endl;
	getch ();
}
