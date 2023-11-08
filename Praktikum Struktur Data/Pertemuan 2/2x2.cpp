#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int baris = 3, kolom = 3; // Matriks 3x3
    int matriks1[3][3];

    cout << "Operasi Matriks 3 x 3" << endl;
    cout << "=====================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================" << endl << endl;

    //Input elemen-elemen matriks
    cout << "Masukkan elemen-elemen matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen ke " << i + 1 << "-" << j + 1 << ": ";
            cin >> matriks1[i][j];
        }
    }
    cout << endl;

    //Menampilkan matriks
    cout << "Hasil Tiga Dimensi Matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

