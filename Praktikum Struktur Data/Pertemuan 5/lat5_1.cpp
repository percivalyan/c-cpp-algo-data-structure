#include<iostream>
#include<conio.h>
using namespace std;

void Tukar(int a, int b);

void Identitas(){
	cout << "Tugas Praktikum Latihan 5_1" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
};

int main(){
    int a = 8, b = -5;
    
    Identitas();
    
    cout<<"Nilai a dan b sebelumnya : " << a << " & " << b;
    Tukar(a, b);
    cout<<"\nNilai a dan b Setelah ditukar : " << b << " & " << a;
    getch();
}

void Tukar(int x, int y){
    int z;
    z = x;
    x = y;
    y = z;
}





