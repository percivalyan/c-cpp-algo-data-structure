#include <iostream>
#include <string>

using namespace std;

//Struct untuk menyimpan biodata pegawai
struct Pegawai {
    int NIP;
    string Nama, Alamat, Agama, Jabatan;
};

void Identitas(){
	cout << "Tugas Praktikum Pertemuan 6 lat6_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
}

int main() {
    const int maxPegawai = 100; //Jumlah maksimal pegawai yang dapat disimpan
    Pegawai daftarPegawai[maxPegawai];

    int jumlahPegawai;
    
    Identitas();

    cout<<"Masukkan jumlah pegawai: ";
    cin>>jumlahPegawai;
    cout<<endl;

    //Mengisi data pegawai
    for (int i = 0; i < jumlahPegawai; i++) {
        cout<<"Pegawai ke-" << i + 1 << ":\n";
        cout<<"NIP: ";
        cin>>daftarPegawai[i].NIP;
        cin.ignore(); // Membersihkan newline character dari input sebelumnya
        cout<<"Nama: ";
        getline(cin, daftarPegawai[i].Nama);
        cout<<"Alamat: ";
        getline(cin, daftarPegawai[i].Alamat);
        cout<<"Agama: ";
        getline(cin, daftarPegawai[i].Agama);
        cout<<"Jabatan: ";
        getline(cin, daftarPegawai[i].Jabatan);
        cout<<endl;
    }

    int cariNIP;
    bool DataDitemukan=false;

    cout<<"Masukkan NIP pegawai yang ingin dicari: ";
    cin>>cariNIP;

    // Melakukan pencarian sequential
    for (int i = 0; i < jumlahPegawai; i++){
        if (daftarPegawai[i].NIP == cariNIP){
            cout<<"Pegawai DataDitemukan:\n";
            cout<<"NIP: " <<daftarPegawai[i].NIP<<endl;
            cout<<"Nama: " <<daftarPegawai[i].Nama<<endl;
            cout<<"Alamat: " <<daftarPegawai[i].Alamat<<endl;
            cout<<"Agama: " <<daftarPegawai[i].Agama<<endl;
            cout<<"Jabatan: " <<daftarPegawai[i].Jabatan<<endl;
            DataDitemukan = true;
            break;
        }
    }

    if(!DataDitemukan){
        cout<<"Pegawai dengan NIP "<<cariNIP<<" tidak DataDitemukan."<<endl;
    }
    return 0;
}

