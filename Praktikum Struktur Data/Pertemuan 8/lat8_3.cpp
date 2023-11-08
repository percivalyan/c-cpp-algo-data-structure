#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan dengan Metode Minimum Sort 
//“Pengurutan Secara Menaik” (simpan dengan nama lat8_3.cpp)

void Identitas() {
    cout << "Tugas Praktikum Pertemuan 8 lat8_3" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
}

int main() {
    Identitas();
    int Nilai[20];
    int i, j, N, l;
    int temp, Imin;

    cout << "Masukan Banyak bilangan : ";
    cin >> N;
    
    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum Diurutkan
    cout << "\nData sebelum diurut :";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses pengurutan
    for (i = 0; i <= N - 2; i++) {
        Imin = i;
        for (j = i + 1; j < N; j++) {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;

        cout << endl;
        for (l = 0; l < N; l++)
            cout << setw(3) << Nilai[l];
    }

    cout << "\nData Setelah di urut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    return 0;
}

