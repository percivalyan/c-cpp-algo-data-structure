#include <iostream>
#include <conio.h>
using namespace std;

struct Mahasiswa {
    char NIM[13]; // Diubah dari 9 menjadi 13
    char Nama[25];
    char Alamat[40];
    int Umur;
};

int main() {
	cout<<"Ryanda Deanova_211011450036_04TPLP001"<<endl<<endl;
    Mahasiswa Mhs[3]; //dari 5 ke 3
    int i;
    for (i = 0; i < 3; i++) {
    	cout << "Mahasiswa " << i+1 << " : " << endl; 
        cout << "NIM : ";
        cin.getline(Mhs[i].NIM, sizeof(Mhs[i].NIM));
        cout << "Nama : ";
        cin.getline(Mhs[i].Nama, sizeof(Mhs[i].Nama));
        cout << "Alamat : ";
        cin.getline(Mhs[i].Alamat, sizeof(Mhs[i].Alamat));
        cout << "Umur : ";
        cin >> Mhs[i].Umur;
        cin.ignore();
        cout << endl;
    }
	
	cout<<"Cetak : ";
    for (i = 0; i < 3; i++) {
    	cout << "\nMahasiswa " << i+1 << " : ";
        cout << "\nNIM : " << Mhs[i].NIM;
        cout << "\nNama : " << Mhs[i].Nama;
        cout << "\nAlamat : " << Mhs[i].Alamat;
        cout << "\nUmur : " << Mhs[i].Umur;
        cout << endl;
    }
    getch();
}

