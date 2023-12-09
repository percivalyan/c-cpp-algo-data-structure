#include <iostream>
#include <iomanip>

using namespace std;

void identitas(){
	cout << "Tugas Praktikum Pertemuan 7 lat7_5" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
};

void MaximumSortMenaik() {
    int Nilai[20];
    int i, j, N;
    int temp, U, Imaks;
	
    cout << "Metode Maximum Sort - Pengurutan Secara Menaik" << endl;

    cout << "Masukkan Banyaknya Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak sebelum diurutkan
    cout << "\nData sebelum diurutkan: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
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

    cout << "\nData Setelah diurutkan: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cin.get(); // Menunggu input sebelum program berakhir
}

void MaximumSortMenurun() {
    int Nilai[20];
    int i, j, N;
    int temp, U, Imaks;

    cout << "Metode Maximum Sort - Pengurutan Secara Menurun" << endl;

    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke -" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData Sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses pengurutan
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
        U--;
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cin.get(); // Menunggu input sebelum program berakhir
}

void MinimumSortMenaik() {
    int Nilai[20];
    int i, j, N;
    int temp, Imin;

    cout << "Metode Minimum Sort - Pengurutan Secara Menaik" << endl;

    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum Diurutkan
    cout << "\nData sebelum diurut :";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses pengurutan
    for (i = 0; i <= N - 2; i++) {
        Imin = i;
        for (j = i + 1; j < N; j++) {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cin.get(); // Menunggu input sebelum program berakhir
}

void MinimumSortMenurun() {
    int Nilai[20];
    int i, j, N;
    int temp, U, Imin;

    cout << "Metode Minimum Sort - Pengurutan Secara Menurun" << endl;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;
    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++) {
        Imin = i;
        for (j = i + 1; j <= U; j++) {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imin];
        Nilai[Imin] = temp;
        U--;
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    cin.get(); // Menunggu input sebelum program berakhir
}

int main() {
    int pilihan;
	identitas();
    cout << "Menu Program:" << endl;
    cout << "1. Metode Maximum Sort - Pengurutan Secara Menaik" << endl;
    cout << "2. Metode Maximum Sort - Pengurutan Secara Menaik" << endl;
    cout << "2. Metode Maximum Sort - Pengurutan Secara Menurun" << endl;
    cout << "3. Metode Minimum Sort - Pengurutan Secara Menaik" << endl;
    cout << "4. Metode Minimum Sort - Pengurutan Secara Menurun" << endl << endl;
    cout << "Pilih program (1-4): ";
    cin >> pilihan;
    cout << endl;

    if (pilihan == 1) {
        MaximumSortMenaik();
    } else if (pilihan == 2) {
        MaximumSortMenurun();
    } else if (pilihan == 3) {
        MinimumSortMenaik();
    } else if (pilihan == 4) {
        MinimumSortMenurun();
    } else {
        cout << "Pilihan tidak valid. Silakan pilih angka antara 1 hingga 4." << endl << endl;
    }

    return 0;
}

