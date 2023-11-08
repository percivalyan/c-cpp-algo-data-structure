#include <iostream>
using namespace std;

int main() {
    int n, cari;
    bool ketemu = false;
    
    cout<<"Tugas Pendahuluan Pertemuan 6 No.4"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;

    cout<<"Program Searching Metode Sequential\n";
    cout<<"-----------------------------\n";
    cout<<"Masukan Banyak Data: ";
    cin>>n;

    int A[n];

    for(int i = 0; i < n; i++){
        cout << "Masukan Data Ke-" << i + 1 << ": ";
        cin >> A[i];
    }

    cout<<"Input Bilangan yang dicari: ";
    cin>>cari;
    cout<<"-----------------------------\n";

    for (int i = 0; i < n; i++) {
        if (A[i] == cari){
            ketemu = true;
            cout<<"Data Ditemukan Pada Indeks Ke-"<<i<<endl;
            break;  //Akan keluar dari loop jika data ditemukan.
        }
    }

    if(!ketemu) {
        cout<<"Data tidak ditemukan"<<endl;
    }
    return 0;
}
