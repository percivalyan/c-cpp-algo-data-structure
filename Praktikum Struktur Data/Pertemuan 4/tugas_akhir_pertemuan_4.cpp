#include <iostream>
using namespace std;

int main() {
    const int baris = 2;
    const int kolom = 2;
    int matriks[baris][kolom];
    
    cout << "Buatlah program dengan menggunakan kombinasi antara Pointer dan Array Dua Dimensi!" 
		 << endl << endl;
    
    cout << "Tugas Akhir Pertemuan 5" << endl;
	cout << "Nama	: Ryanda Deanova" << endl;
	cout << "NIM	: 211011450036" << endl;
	cout << "Kelas 	: 04TPLP001" << endl << endl;

    // Meminta pengguna memasukkan nilai-nilai dalam matriks
    cout << "Masukkan nilai-nilai dalam matriks " << baris << "x" << kolom << ":" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Matriks[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;

    // Menggunakan pointer untuk mengakses dan mencetak nilai-nilai dalam matriks
    int *ptr = &matriks[0][0];

    cout << "Isi Matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << *(ptr + i * kolom + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
