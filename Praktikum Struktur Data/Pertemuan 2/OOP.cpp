#include <iostream>
using namespace std;

int main() {
    int baris = 2, kolom = 2; // Matriks 2x2
    int matriks1[2][2], matriks2[2][2], hasil[2][2];

	cout<<"Penjumlahan Matriks 2 x 2"<<endl;
	cout<<"========================="<<endl;
	cout<<"Nama  : Ryanda Deanova"<<endl;
	cout<<"NIM   : 211011450036"<<endl;
    cout<<"Kelas : 04TPLP001"<<endl;
    cout<<"========================="<<endl<<endl;
    
    // Input elemen-elemen matriks pertama
    cout << "Masukkan elemen-elemen matriks pertama:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen ke " << i + 1 << "-" << j + 1 << ": ";
            cin >> matriks1[i][j];
        }
    }
    cout<<endl;

    // Input elemen-elemen matriks kedua
    cout << "Masukkan elemen-elemen matriks kedua:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen ke " << i + 1 << "-" << j + 1 << ": ";
            cin >> matriks2[i][j];
        }
    }
    cout<<endl;

    // Menjumlahkan kedua matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }

    // Menampilkan matriks hasil dengan format yang diinginkan
    cout << "Hasil Penjumlahan:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks1[i][j] << " ";
        }
        if (i == baris / 2) {
            cout << "+  ";
        } else {
            cout << "   ";
        }
        for (int j = 0; j < kolom; j++) {
            cout << matriks2[i][j] << " ";
        }
        if (i == baris / 2) {
            cout << "=  ";
        } else {
            cout << "   ";
        }
        for (int j = 0; j < kolom; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
