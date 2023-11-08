//Tugas Pendahuluan no.4 Buatlah contoh program sederhana kombinasi Array dan Structure!
#include<iostream>
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
    Mahasiswa mhs[3];
    
	cout<<"Ryanda Deanova_211011450036_04TPLP001"<<endl;
	
    for (i = 0; i < 3; i++)
    {
    	cout << "Data Mahasiswa Ke-" << i+1 << " " << endl;
        cout << "Masukkan NIM : ";
        cin >> mhs[i].NIM;
        cout << "Masukkan Nama : ";
        cin.ignore();
        cin.getline(mhs[i].nama, sizeof(mhs[i].nama));
        cout << "Masukkan Nilai Akhir : ";
        cin >> mhs[i].nilai;
        cout << endl;
    }

    cout << endl;
    cout << "Data Nilai Akhir Mahasiswa" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Data Ke-" << i + 1 << endl;
        cout << "NIM : " << mhs[i].NIM << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Nilai Akhir : " << mhs[i].nilai << endl;
        cout << endl;
    }

    return 0;
}
