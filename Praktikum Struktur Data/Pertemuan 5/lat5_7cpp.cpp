#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    char Nim[9];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

void Baca(Mahasiswa* Mhs);
void Cetak(Mahasiswa* Mhs);

int main()
{
    Mahasiswa Mhs;
    cout << "Membaca Nilai Anggota Struktur \n";
    Baca(&Mhs);
    cout << "\nMencetak Nilai Anggota Struktur ";
    Cetak(&Mhs);
    
    return 0;
}

void Baca(Mahasiswa* Mhs)
{
    cout << "NIM : ";
    cin.getline(Mhs->Nim, 9);
    cout << "Nama : ";
    cin.getline(Mhs->Nama, 25);
    cout << "Alamat : ";
    cin.getline(Mhs->Alamat, 40);
    cout << "Umur : ";
    cin >> Mhs->Umur;
}

void Cetak(Mahasiswa* Mhs)
{
    cout << "\nNim : " << Mhs->Nim;
    cout << "\nNama : " << Mhs->Nama;
    cout << "\nAlamat : " << Mhs->Alamat;
    cout << "\nUmur : " << Mhs->Umur << endl;
}

