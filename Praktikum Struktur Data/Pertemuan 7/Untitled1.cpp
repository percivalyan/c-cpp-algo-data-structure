#include <iostream>

using namespace std;

void Identitas() {
    cout << "Tugas Akhir Pertemuan 6" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
}

int main() {
    int angka, banyak = 0;
    bool ditemukan = false;
    int posisi[25];
    int data[25] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};

    Identitas();

    cout << "Sederetan Data: ";
    for (int i = 0; i < 25; i++) {
        cout << data[i] << " ";
    }
    cout << "\n\nData yang ingin dicari: ";
    cin >> angka;

    for (int i = 0; i < 25; i++) {
        if (data[i] == angka) {
            ditemukan = true;
            posisi[banyak] = i + 1;
            banyak++;
        }
    }

    if (ditemukan) {
        cout << "Data ditemukan: " << angka;
        cout << "\nDitemukan sebanyak " << banyak;
        cout << "\nPada posisi ke ";
        for (int i = 0; i < banyak; i++) {
            cout << posisi[i] << "  ";
        }
    } else {
        cout << "Data " << angka << " tidak ditemukan";
    }

    return 0;
}

