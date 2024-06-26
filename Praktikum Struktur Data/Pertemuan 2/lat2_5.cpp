#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Menetapkan ukuran matriks
    const int baris = 3;
    const int kolom = 4;
    
    cout << "Tugas Praktikum Pertemuan 2 lat2_5" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    //Mendeklarasikan matriks dengan ukuran yang telah ditentukan
    int matriks[baris][kolom] = {
        {1, 3, 4, 5},
        {2, 4, 6, 8},
        {3, 5, 7, 9},
    };

    //Merapikan jarak antar bilangan
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << setw(2) << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

