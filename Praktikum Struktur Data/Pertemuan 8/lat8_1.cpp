#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan dengan Metode Maximum Sort 
//“Pengurutan Secara Menaik” (simpan dengan nama lat8_1.cpp)

void Identitas() {
    cout << "Tugas Praktikum Pertemuan 8 lat8_1" << endl;
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
    int temp, U, Imaks;

    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;
    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak sebelum diurutkan
    cout << "\nData sebelum diurut :";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
        Imaks = 0;
        for (j = 1; j <= U; j++) {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        U--;
    }

    cout << "\nData setelah diurut :";
    for (l = 0; l < N; l++)
        cout << setw(3) << Nilai[l];

    return 0;
}

