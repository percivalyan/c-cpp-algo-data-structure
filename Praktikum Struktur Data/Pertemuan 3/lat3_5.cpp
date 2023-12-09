#include <iostream>
using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
};

struct Nilai {
    int Nilai_Tugas, Nilai_UTS, Nilai_UAS, Nilai_Akhir;
    char Nilai_Huruf;
};

int main() {
	cout << "Tugas Praktikum Pertemuan 3 lat3_5" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
    Mahasiswa Mhs;
    Nilai nilai_Mhs;

    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_Mhs.Nilai_Tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> nilai_Mhs.Nilai_UTS;
    cout << "Masukkan Nilai UAS : ";
    cin >> nilai_Mhs.Nilai_UAS;
    cout << endl;

    cout << "Nilai Tugas : " << nilai_Mhs.Nilai_Tugas << endl;
    cout << "Nilai UTS : " << nilai_Mhs.Nilai_UTS << endl;
    cout << "Nilai UAS : " << nilai_Mhs.Nilai_UAS << endl;
    cout << endl;

    cout << "Nilai Akhir : 20% x Nilai Tugas + 35% x Nilai UTS + 45% x Nilai UAS" << endl;
    cout << "Nilai Akhir : 20% x " << nilai_Mhs.Nilai_Tugas << " + 35% x " << nilai_Mhs.Nilai_UTS 
		 << " + 45% x " << nilai_Mhs.Nilai_UAS << endl;
    nilai_Mhs.Nilai_Akhir = (0.20 * nilai_Mhs.Nilai_Tugas) + (0.35 * nilai_Mhs.Nilai_UTS) + 
							(0.45 * nilai_Mhs.Nilai_UAS);
    cout << "Nilai Akhir : " << nilai_Mhs.Nilai_Akhir << endl;
	cout << "Nilai Huruf : ";
	
    if (nilai_Mhs.Nilai_Akhir >= 85 && nilai_Mhs.Nilai_Akhir <= 100) {
        cout << "A" << endl;
    } else if (nilai_Mhs.Nilai_Akhir >= 70 && nilai_Mhs.Nilai_Akhir < 85) {
        cout << "B" << endl;
    } else if (nilai_Mhs.Nilai_Akhir >= 55 && nilai_Mhs.Nilai_Akhir < 70) {
        cout << "C" << endl;
    } else if (nilai_Mhs.Nilai_Akhir >= 40 && nilai_Mhs.Nilai_Akhir < 55) {
        cout << "D" << endl;
    } else if (nilai_Mhs.Nilai_Akhir >= 0 && nilai_Mhs.Nilai_Akhir < 40) {
        cout << "E" << endl;
    } else {
        cout << "Nilai tidak valid" << endl;
    }
    return 0;
}
