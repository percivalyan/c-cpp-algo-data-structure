#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan dengan Metode Insertion Sort 
//“Pengurutan Secara menaik” (simpan dengan nama lat9_3.cpp)

int main()
{
    int Nilai[20];
    int i, j, k, N;
    int temp;
    
    cout << "Pengurutan Metode Insertion Sort (Penyisipan) Menaik" << endl;
    
    cout << "Tugas Praktikum Pertemuan 9 lat9_3" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
    cout << "Masukan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan dengan Penyisipan
    cout << "\nProses Pengurutan: ";
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        j = i - 1;
        while ((temp <= Nilai[j]) && (j >= 0))
        {
            Nilai[j + 1] = Nilai[j];
            j--;
        }
        Nilai[j + 1] = temp;

        cout << endl;
        for (k = 0; k < N; k++)
            cout << setw(3) << Nilai[k];
    }

    //Proses Cetak Setelah diurutkan
    cout << "\nData Setelah diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    getch();
    return 0;
}

