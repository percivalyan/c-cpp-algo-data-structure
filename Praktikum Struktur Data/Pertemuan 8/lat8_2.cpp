#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan dengan Metode Maximum Sort 
//“Pengurutan Secara Menurun” (simpan dengan nama lat8_2.cpp)

void Identitas() {
    cout << "Tugas Praktikum Pertemuan 8 lat8_2" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
}

int main() {
    Identitas();

    int Nilai[20];
    int i, j, N, U, Imaks, temp;

    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak sebelum diurutkan
    cout << "\nData Sebelum diurut :";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
        Imaks = i;
        for (j = i + 1; j <= U; j++) {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }

        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
    }

    cout << "\nData Setelah diurut :";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cout << endl;

    return 0;
}

