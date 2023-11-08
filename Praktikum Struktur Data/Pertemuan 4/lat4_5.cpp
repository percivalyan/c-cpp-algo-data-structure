#include<iostream>
using namespace std;

int main(){	
	cout << "Buatlah program sederhana dengan menggunakan kombinasi antara Pointer" << endl;
	cout << "dan perintah While (simpan dengan nama lat5_4.cpp)" << endl << endl;

	cout << "Tugas Praktikum Latihan 4_5" << endl;
	cout << "Nama	: Ryanda Deanova" << endl;
	cout << "NIM	: 211011450036" << endl;
	cout << "Kelas 	: 04TPLP001" << endl << endl;
	
    const int arraySize = 5; //Deklarasi Mengatur ukuran array ada 5 sekarang
    int array[arraySize];    //Deklarasi array
    int *ptr = array;        //Pointer awal array
    int ganjil = 0;          //Inisialisasi bil. ganjil
    
	cout<<"Mencari Jumlah Bilangan Ganjil dari Bilangan yang Dimasukkan"<<endl;
	cout<<"============================================================"<<endl;
    //Input nilai array
    cout<<"Masukkan "<<arraySize<<" bilangan bulat: "<<endl;
    for(int i = 0; i < arraySize; i++){
    	cout<<"Bilangan ke-"<<i+1<<": ";
        cin>>array[i];
    }

    while(ptr < array + arraySize){
        if (*ptr % 2 != 0) {
            ganjil++; // ganjil ke operasi
        }
        ptr++; // Pindah pointer ke dalam elemen berikutnya (array)
    }

    cout<<"Jumlah bilangan ganjil dalam array adalah: "<<ganjil<< endl;

    return 0;
}
