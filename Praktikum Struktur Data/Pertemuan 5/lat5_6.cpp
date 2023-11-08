#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{
    string Nim;
    string Nama;
    string Alamat;
    short Umur;
};

void Baca(Mahasiswa &Mhs);
void Cetak(Mahasiswa &Mhs);

void Identitas(){
	cout << "Tugas Praktikum Latihan 5_6" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
};

int main(){
	Identitas();
    
    Mahasiswa Mhs;
    cout<<"Membaca Nilai Anggota Struktur \n";
    Baca(Mhs);
    cout<<"\nMencetak Nilai Anggota Struktur ";
    Cetak(Mhs);

    return 0;
}

void Baca(Mahasiswa &Mhs){
    cout<<"NIM: ";
    cin.ignore();
    getline(cin, Mhs.Nim);
    cout<<"Nama: ";
    getline(cin, Mhs.Nama);
    cout<<"Alamat: ";
    getline(cin, Mhs.Alamat);
    cout<<"Umur: ";
    cin >> Mhs.Umur;
}

void Cetak(Mahasiswa &Mhs){
    cout<<"\nNim: "<<Mhs.Nim;
    cout<<"\nNama: "<<Mhs.Nama;
    cout<<"\nAlamat: "<<Mhs.Alamat;
    cout<<"\nUmur: "<<Mhs.Umur << endl;
}

