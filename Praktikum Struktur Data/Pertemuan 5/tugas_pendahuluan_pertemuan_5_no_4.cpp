#include <iostream>
using namespace std;

void operasi() {
    int angka1, angka2;

    cout << "Masukkan angka 1: ";
    cin >> angka1;

    cout << "Masukkan angka 2: ";
    cin >> angka2;

    cout << angka1 << " + " << angka2 << " = " << angka1 + angka2 << endl;
    cout << angka1 << " - " << angka2 << " = " << angka1 - angka2 << endl;
    cout << angka1 << " * " << angka2 << " = " << angka1 * angka2 << endl;
    cout << angka1 << " / " << angka2 << " = " << angka1 / angka2 << endl;
    cout << angka1 << " % " << angka2 << " = " << angka1 % angka2 << endl;
}

int main() {
    cout << "Buatlah contoh program sederhana menggunakan Fungsi!" << endl << endl;

    cout << "Tugas Pendahuluan Pertemuan 5 No 4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    operasi();

    return 0;
}

