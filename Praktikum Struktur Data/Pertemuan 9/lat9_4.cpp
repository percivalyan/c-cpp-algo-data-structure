#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Nilai[20];
    int i, j, k, N;
    int temp;
    
    cout << "Pengurutan Metode Insertion Sort (Penyisipan) Menurun" << endl;
    
    cout << "Tugas Praktikum Pertemuan 9 lat9_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    
    cout << "Masukkan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan dengan Penyisipan
    cout << "\nProses Pengurutan: ";
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        j = i - 1;
        while (j >= 0 && temp > Nilai[j])
        {
            Nilai[j + 1] = Nilai[j];
            j--;
        }
        Nilai[j + 1] = temp;

        cout << endl;
        for (k = 0; k < N; k++)
            cout << setw(3) << Nilai[k];
    }

    // Proses Cetak Setelah diurutkan
    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    return 0;
}

