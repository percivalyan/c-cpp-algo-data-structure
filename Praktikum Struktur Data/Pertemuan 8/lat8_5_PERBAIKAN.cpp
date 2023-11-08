#include <iostream>
#include <iomanip>
using namespace std;

void MaximumSortAscending(int Nilai[], int N);
void MaximumSortDescending(int Nilai[], int N);
void MinimumSortAscending(int Nilai[], int N);
void MinimumSortDescending(int Nilai[], int N);

int main() {
    int choice;
    int Nilai[20];
    int N;

    while (true) {
        cout << "\nTugas Praktikum Pertemuan 8 lat8_5" << endl;
        cout << "Nama    : Ryanda Deanova" << endl;
        cout << "NIM     : 211011450036" << endl;
        cout << "Kelas   : 04TPLP001" << endl;
        cout << endl;
        cout << "Menu Program Pertemuan 8" << endl;
        cout << "1. Metode Maximum Sort Pengurutan Secara Menaik (lat8_1)" << endl;
        cout << "2. Metode Maximum Sort Pengurutan Secara Menurun (lat8_2)" << endl;
        cout << "3. Metode Minimum Sort Pengurutan Secara Menaik (lat8_3)" << endl;
        cout << "4. Metode Minimum Sort Pengurutan Secara Menurun (lat8_4)" << endl;
        cout << "5. Keluar" << endl << endl;
        cout << "Pilih program (1-5): ";
        cin >> choice;

        if (choice == 1) {
            MaximumSortAscending(Nilai, N);
        } else if (choice == 2) {
            MaximumSortDescending(Nilai, N);
        } else if (choice == 3) {
            MinimumSortAscending(Nilai, N);
        } else if (choice == 4) {
            MinimumSortDescending(Nilai, N);
        } else if (choice == 5) {
            cout << "\nProgram Telah Selesai. Terima Kasih Sudah Menggunakan." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    }

    return 0;
}

void MaximumSortAscending(int Nilai[], int N) {
    cout << "\nMetode Maximum Sort Pengurutan Secara Menaik (lat8_1)" << endl;
    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Implementasi pengurutan Maximum Sort secara Menaik
    for (int i = 0; i < N - 1; i++) {
        int Imaks = i;
        for (int j = i + 1; j < N; j++) {
            if (Nilai[j] > Nilai[Imaks]) {
                Imaks = j;
            }
        }
        swap(Nilai[i], Nilai[Imaks]);
    }

    cout << "Data setelah diurut : ";
    for (int i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }
    cout << endl;
}

void MaximumSortDescending(int Nilai[], int N) {
    cout << "\nMetode Maximum Sort Pengurutan Secara Menurun (lat8_2)" << endl;
    cout << "Masukan Banyaknya Bilangan : ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Implementasi pengurutan Maximum Sort secara Menurun
    for (int i = 0; i < N - 1; i++) {
        int Imaks = i;
        for (int j = i + 1; j < N; j++) {
            if (Nilai[j] > Nilai[Imaks]) {
                Imaks = j;
            }
        }
        swap(Nilai[i], Nilai[Imaks]);
    }

    cout << "Data setelah diurut : ";
    for (int i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }
    cout << endl;
}

void MinimumSortAscending(int Nilai[], int N) {
    cout << "\nMetode Minimum Sort Pengurutan Secara Menaik (lat8_3)" << endl;
    cout << "Masukan Banyak bilangan : ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Implementasi pengurutan Minimum Sort secara Menaik
    for (int i = 0; i < N - 1; i++) {
        int Imin = i;
        for (int j = i + 1; j < N; j++) {
            if (Nilai[j] < Nilai[Imin]) {
                Imin = j;
            }
        }
        swap(Nilai[i], Nilai[Imin]);
    }

    cout << "Data Setelah di urut : ";
    for (int i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }
    cout << endl;
}

void MinimumSortDescending(int Nilai[], int N) {
    cout << "\nMetode Minimum Sort Pengurutan Secara Menurun (lat8_4)" << endl;
    cout << "Masukan Banyak Bilangan: ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Implementasi pengurutan Minimum Sort secara Menurun
    for (int i = 0; i < N - 1; i++) {
        int Imin = i;
        for (int j = i + 1; j < N; j++) {
            if (Nilai[j] < Nilai[Imin]) {
                Imin = j;
            }
        }
        swap(Nilai[i], Nilai[Imin]);
    }

    cout << "Data Setelah diurut : ";
    for (int i = 0; i < N; i++) {
        cout << setw(3) << Nilai[i];
    }
    cout << endl;
}

