#include <iostream>
using namespace std;

int main(){
    int n, i, cari, ketemu = 0;
    int A[100];
    
    cout<<"Praktikum Struktur Data"<<endl;
    cout<<"Tugas Pendahuluan Pertemuan 6 No. 4"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;

    cout<<"Program Sequential Search"<<endl;
    cout<<"-------------------------"<<endl;
    
    cout<<"Masukan Banyak Data : ";
    cin>>n;
    cout<<endl;

    for(i = 1; i <= n; i++){
        cout<<"Masukan Data Ke-" <<i<<" : ";
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Input Bilangan yang dicari : ";
    cin>>cari;
    cout<<"--------------------------"<<endl<<endl;

    for(i = 1; i <= n; i++){
        if(A[i]==cari){
            ketemu=1;
            cout<<"Data Ditemukan Pada Indeks Ke-"<<i<<endl;
        }
    }
    if(ketemu == 0){
        cout<<"Data tidak ditemukan"<<endl;
    }
    return 0;
}
