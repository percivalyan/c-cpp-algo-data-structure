#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan dengan Metode Minimum Sort 
//“Pengurutan Secara Menurun” (simpan dengan nama lat8_4.cpp)

void Identitas() {
    cout << "Tugas Praktikum Pertemuan 8 lat8_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
}

int main() {
    Identitas();

    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imin;

    cout << "Masukan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }

    //Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
        Imin = i;
        for (j = i + 1; j < N; j++) {
            if (Nilai[j] < Nilai[Imin]) {
                Imin = j;
            }
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
        U--;
        cout << endl;
        for (l = 0; l < N; l++) {
            cout << setw(3) << Nilai[l];
        }
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }

    return 0;
}

