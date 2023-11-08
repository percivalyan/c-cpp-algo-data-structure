#include<iostream>
#include<conio.h>
using namespace std;

int Maksimum(int a, int b, int c, long d, long int e);

void Identitas(){
	cout << "Tugas Praktikum Latihan 5_3" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
};

int main(){
    int a = 8, b = 12, c = -5;
    //tambahan
    long d=90;
    long int e=800;

    Identitas();

    cout<<"Nilai a = "<< a;
    cout<<"\nNilai b = "<< b;
    cout<<"\nNilai c = "<< c;
    
    //tambahan
    cout<<"\nNilai d = "<< d;
    cout<<"\nNilai e = "<< e;
    
    cout<<"\nNilai Terbesar : "<< Maksimum(a, b, c, d, e);
    getch();
}

int Maksimum(int x, int y, int z, long xy, long int xz){ //Parameter x=a, y=b, z=c
    int Besar = x;
    if (y>Besar)
        Besar = y;
    if (z>Besar)
        Besar = z;
    //tambahan
    if (xy>Besar)
        Besar = xy;
    if (xz>Besar)
        Besar = xz;
    return (Besar);
}

