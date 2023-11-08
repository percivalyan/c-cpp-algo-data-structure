#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa {
    char Nim[13]; //Agar pas 12 Digit
    char Nama[25];
    char Alamat[40];
    int Umur; //short ganti int
};

void Identitas(){
	cout << "Tugas Praktikum Latihan 5_7" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
};

//Deklarasi proto tipe fungsi
void Baca(Mahasiswa* Mhs);
void Cetak(Mahasiswa* Mhs);

void Baca(Mahasiswa* Mhs){
    cout << "NIM : ";
    cin.getline(Mhs->Nim, 13);
    cout << "Nama : ";
    cin.getline(Mhs->Nama, 25);
    cout << "Alamat : ";
    cin.getline(Mhs->Alamat, 40);
    cout << "Umur : ";
    cin >> Mhs->Umur;
    cin.ignore(); //Agar bersih (newline)
};

//Fungsi Cetak
void Cetak(Mahasiswa* Mhs){
    cout << "\nNim : " << Mhs->Nim;
    cout << "\nNama : " << Mhs->Nama;
    cout << "\nAlamat : " << Mhs->Alamat;
    cout << "\nUmur : " << Mhs->Umur << endl;
};

int main(){
	Identitas();
	
	Mahasiswa Mhs;
	//Pointer
    cout << "Membaca Nilai Anggota Struktur \n";
    Baca(&Mhs);
	
    cout << "\nMencetak Nilai Anggota Struktur ";
    Cetak(&Mhs);
    
    return 0;
}
