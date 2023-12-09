//Tugas Pendahuluan No.3 Buatlah contoh program sederhana menggunakan Structure!
#include <iostream>
using namespace std;

struct Mahasiswa
{
    char NIM[13];
    char nama[30];
    float nilai;
};

int main()
{
    int i;
    Mahasiswa mhs;
    cout << "Tugas Pendahuluan Pertemuan 3 No. 3" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
    
    for (i = 0; i < 3; i++)
    {
        cout << "Data Mahasiswa Ke-" << i+1 << " " << endl;
        cout << "Masukkan NIM : ";
        cin >> mhs.NIM;
        cout << "Masukkan Nama : ";
        cin.ignore();
        cin.getline(mhs.nama, sizeof(mhs.nama));
        cout << "Masukkan Nilai Akhir : ";
        cin >> mhs.nilai;
        cout << endl;
        
        // Menampilkan data mahasiswa yang baru dimasukkan
        cout << "Data Ke-" << i + 1 << endl;
        cout << "NIM : " << mhs.NIM << endl;
        cout << "Nama : " << mhs.nama << endl;
        cout << "Nilai Akhir : " << mhs.nilai << endl;
        cout << endl;
    }

    return 0;
}
