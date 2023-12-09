#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program untuk Pengurutan denganMetode Shell Sort “Pengurutan 
//secara menurun” (simpan dengan nama lat9_2.cpp)

int main()
{
    int Nilai[20];
    int i, k, N, l;
    int temp, jarak, s;
    
    cout << "Pengurutan Metode Shell Sort Menurun" << endl;
    
    cout << "Tugas Praktikum Pertemuan 9 lat9_2" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++){
    	 cout << setw(4) << Nilai[i];
	}

    //Proses pengurutan
    cout << "\nProses Pengurutan: ";
    jarak = N / 2;
    cout << "\nJarak= " << jarak; //K

    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (Nilai[i] < Nilai[k])
                {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];
                    cout << "\n\t";
                }
            }
        } while (s != 0);

        jarak /= 2;
        cout << "\nJarak= " << jarak; //K
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    return 0;
}

