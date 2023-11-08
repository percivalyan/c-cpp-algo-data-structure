//PERBAIKAN
#include <iostream>
#include <iomanip>
using namespace std;

//Buatlah program menu untuk menampilkan 4 program di atas, 
//menggunakan perintah IF (simpan dengan nama lat8_5.cpp)

int main() {
	menu:
    //Identitas();
    int choice;
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imin, Imaks;

    for (i = 0; i < 10; i++) {
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
	    //cout << endl;
	
	    if (choice == 1) {
	        cout << "\nMetode Maximum Sort Pengurutan Secara Menaik (lat8_1)" << endl;
	
	        cout << "Masukan Banyaknya Bilangan : ";
	        cin >> N;
	        for (i = 0; i < N; i++) {
	            cout << "Elemen ke-" << i + 1 << " : ";
	            cin >> Nilai[i];
	        }
	
	        // Proses Cetak sebelum diurutkan
	        cout << "\nData sebelum diurut :";
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
	
	        cout << "\nData setelah diurut :";
	        for (l = 0; l < N; l++)
	            cout << setw(3) << Nilai[l];
	    }
	    else if (choice == 2) {
	        cout << "\nMetode Maximum Sort Pengurutan Secara Menurun (lat8_2)" << endl;
	
	        cout << "Masukan Banyaknya Bilangan : ";
	        cin >> N;
	
	        for (i = 0; i < N; i++) {
	            cout << "Elemen ke-" << i + 1 << " : ";
	            cin >> Nilai[i];
	        }
	
	        // Proses Cetak Sebelum diurut
	        cout << "\nData Sebelum diurut :";
	        for (i = 0; i < N; i++)
	            cout << setw(3) << Nilai[i];
	
	        // Proses pengurutan (Selection Sort)
	        U = N - 1;
	        for (i = 0; i <= N - 2; i++) {
	            Imaks = i;
	            for (j = i + 1; j <= U; j++) {
	                if (Nilai[j] > Nilai[Imaks])
	                    Imaks = j;
	            }
	
	            // Swap Nilai[i] with Nilai[Imaks]
	            temp = Nilai[i];
	            Nilai[i] = Nilai[Imaks];
	            Nilai[Imaks] = temp;
	        }
	
	        // Cetak data setelah diurutkan
	        cout << "\nData Setelah diurut :";
	        for (i = 0; i < N; i++)
	            cout << setw(3) << Nilai[i];
	
	        cout << endl;
	    }
	    else if (choice == 3) {
	        cout << "\nMetode Minimum Sort Pengurutan Secara Menaik (lat8_3)" << endl;
	
	        cout << "Masukan Banyak bilangan : ";
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
	
	            cout << endl;
	            for (l = 0; l < N; l++)
	                cout << setw(3) << Nilai[l];
	        }
	
	        cout << "\nData Setelah di urut : ";
	        for (i = 0; i < N; i++)
	            cout << setw(3) << Nilai[i];
	    }
	    else if (choice == 4) {
	        cout << "\nMetode Minimum Sort Pengurutan Secara Menurun (lat8_4)" << endl;
	
	        cout << "Masukan Banyak Bilangan: ";
	        cin >> N;
	
	        for (i = 0; i < N; i++) {
	            cout << "Elemen ke-" << i + 1 << " : ";
	            cin >> Nilai[i];
	        }
	
	        // Proses Cetak Sebelum diurutkan
	        cout << "\nData sebelum diurut : ";
	        for (i = 0; i < N; i++) {
	            cout << setw(3) << Nilai[i];
	        }
	
	        // Proses Pengurutan
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
	    }
	    else if (choice == 5) {
	    	cout << endl;
	        cout << "Program Telah Selesai. Terima Kasih Sudah Menggunakan." << endl;
	        cout << endl;
	        return 0;
	    }
	    else {
	        cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
	        goto menu;
	    }
	    cout << endl;
	    cout << "|=======================PEMBATAS MENU=======================|" << endl;
    }
    cout << endl;

    return 0;
}

