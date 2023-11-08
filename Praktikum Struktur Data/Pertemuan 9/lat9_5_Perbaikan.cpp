#include <iostream>
#include <iomanip>
using namespace std;

void Identitas();
void shellSortMenaik();
void shellSortMenurun();
void insertionSortMenaik();
void insertionSortMenurun();

int main() {
    int choice;
	cout << "================================================================" << endl;
	cout << "Tugas Praktikum Pertemuan 9 lat9_5" << endl;
    Identitas();
    cout << "================================================================" << endl << endl;
    	
    do {
        cout << "Menu Program:\n";
        cout << "1. Shell Sort Menaik\n";
        cout << "2. Shell Sort Menurun\n";
        cout << "3. Insertion Sort Menaik\n";
        cout << "4. Insertion Sort Menurun\n";
        cout << "5. Keluar\n";
        cout << "Pilih program (1-4) atau Keluar (5): ";
        cin >> choice;
        
        cout << endl;
    	cout << "================================================================" << endl << endl;

        switch (choice) {
            case 1:
                shellSortMenaik();
                break;
            case 2:
                shellSortMenurun();
                break;
            case 3:
                insertionSortMenaik();
                break;
            case 4:
                insertionSortMenurun();
                break;
            case 5:
                cout << "Program Telah Selesai. Terima Kasih Sudah Menggunakan." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
        
        cout << endl;
    	cout << "================================================================" << endl;
    	cout << endl;
    } while (choice != 5);

    return 0;
}

void Identitas() {
	cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl;
}

void shellSortMenaik() {
    int Nilai[20];
    int i, k, N, l;
    int temp, jarak, s;

    cout << "Pengurutan Metode Shell Sort Menaik" << endl;
    cout << "Masukkan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];

    //Proses pengurutan
    cout << "\nProses Pengurutan: ";
    jarak = N / 2;
    cout << "\nJarak= " << jarak;

    while (jarak >= 1) {
        do {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++) {
                k = i + jarak;
                if (Nilai[i] > Nilai[k]) {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;

                    cout << endl << endl;

                    for (l = 0; l < N; l++)
                        cout << setw(4) << Nilai[l];

                    cout << "\n\t";
                }
            }
        } while (s != 0);

        jarak /= 2;
        cout << "\nJarak= " << jarak;
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
    
    cout << endl;
}

void shellSortMenurun() {
    int Nilai[20];
    int i, k, N, l;
    int temp, jarak, s;

    cout << "Pengurutan Metode Shell Sort Menurun" << endl;
    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++) {
        cout << setw(4) << Nilai[i];
    }

    //Proses pengurutan
    cout << "\nProses Pengurutan: ";
    jarak = N / 2;
    cout << "\nJarak= " << jarak;

    while (jarak >= 1) {
        do {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++) {
                k = i + jarak;
                if (Nilai[i] < Nilai[k]) {
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
        cout << "\nJarak= " << jarak;
    }

    cout << "\nData Setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(4) << Nilai[i];
        
    cout << endl;
}

void insertionSortMenaik() {
    int Nilai[20];
    int i, j, k, N;
    int temp;

    cout << "Pengurutan Metode Insertion Sort (Penyisipan) Menaik" << endl;
    cout << "Masukan Banyak Bilangan: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    //Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut: ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan dengan Penyisipan
    cout << "\nProses Pengurutan: ";
    for (i = 1; i < N; i++) {
        temp = Nilai[i];
        j = i - 1;
        while ((temp <= Nilai[j]) && (j >= 0)) {
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
        
    cout << endl;
}

void insertionSortMenurun() {
    int Nilai[20];
    int i, j, k, N;
    int temp;

    cout << "Pengurutan Metode Insertion Sort (Penyisipan) Menurun" << endl;
    cout << "Masukkan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Elemen ke-" << i + 1 << " : ";
        cin >> Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << setw(3) << Nilai[i];

    //Proses Pengurutan dengan Penyisipan
    cout << "\nProses Pengurutan: ";
    for (i = 1; i < N; i++) {
        temp = Nilai[i];
        j = i - 1;
        while (j >= 0 && temp > Nilai[j]) {
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
        
    cout << endl;
}
