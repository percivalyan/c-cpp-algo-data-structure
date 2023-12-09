#include <iostream>
#include <conio.h>
using namespace std;

struct Tinggal {
    char Jalan[40];
    char Kota[15];
    char Pos[6]; // Diubah dari 5 menjadi 6
};

struct Tgl_Lahir {
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Mahasiswa {
    char NIM[13]; // Diubah dari 9 menjadi 13
    char Nama[25];
    Tinggal Alamat;
    Tgl_Lahir Lahir;
};

int main() {
	cout << "Tugas Praktikum Pertemuan 3 lat3_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    Mahasiswa Mhs[3]; //5 ke 3
    int i;
    for (i = 0; i < 3; i++) {
    	cout << "Mahasiswa " << i+1 << " : " << endl; 
        cout << "NIM : ";
        cin.getline(Mhs[i].NIM, sizeof(Mhs[i].NIM));
        cout << "Nama : ";
        cin.getline(Mhs[i].Nama, sizeof(Mhs[i].Nama));
        cout << "Alamat :\n";
        cout << "\tJalan : ";
        cin.getline(Mhs[i].Alamat.Jalan, sizeof(Mhs[i].Alamat.Jalan)); 
        cout << "\tKota : ";
        cin.getline(Mhs[i].Alamat.Kota, sizeof(Mhs[i].Alamat.Kota)); 
        cout << "\tKode Pos : ";
        cin.getline(Mhs[i].Alamat.Pos, sizeof(Mhs[i].Alamat.Pos)); 
        cout << "Tanggal Lahir : \n";
        cout << "\tTanggal : ";
        cin >> Mhs[i].Lahir.Tanggal;
        cout << "\tBulan : ";
        cin >> Mhs[i].Lahir.Bulan;
        cout << "\tTahun : ";
        cin >> Mhs[i].Lahir.Tahun;
        cin.ignore();
        cout << endl;
    }

    cout << "\n\nMencetak Kembali Nilai Anggota\n\n";
    for (i = 0; i < 3; i++) {
        cout << "Mahasiswa " << i + 1 << ":\n";
        cout << "\tNIM: " << Mhs[i].NIM << endl;
        cout << "\tNama: " << Mhs[i].Nama << endl;
        cout << "\tAlamat:\n";
        cout << "\t\tJalan: " << Mhs[i].Alamat.Jalan << endl;
        cout << "\t\tKota: " << Mhs[i].Alamat.Kota << endl;
        cout << "\t\tKode Pos: " << Mhs[i].Alamat.Pos << endl;
        cout << "\tTanggal Lahir: " << Mhs[i].Lahir.Tanggal << "-"
             << Mhs[i].Lahir.Bulan << "-" << Mhs[i].Lahir.Tahun << endl;
        cout << endl;
    }
    getch();
}

