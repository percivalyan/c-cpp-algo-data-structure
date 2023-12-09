#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int array[size];
    
    cout << "Tugas Pendahuluan Pertemuan 12 No. 3" << endl;
    cout << "Tuliskan contoh program pada operasi Full!" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;


    //Operasi Full: Mengisi array
    cout << "Masukkan " << size << " angka untuk diisi ke dalam array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> array[i];
    }

    //Operasi Full: Menampilkan isi array
    cout << "Isi array: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

