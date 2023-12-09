#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;
    
   	cout << "Tugas Pendahuluan Pertemuan 4 No 4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    // Meminta pengguna memasukkan sebuah bilangan
    cout << "Masukkan sebuah bilangan: ";
    cin >> num;

    // Menggunakan pointer untuk menentukan apakah bilangan tersebut 
	// ganjil atau genap
    ptr = &num;

    if (*ptr % 2 == 0) {
        cout << *ptr << " adalah bilangan genap." << endl;
    } else {
        cout << *ptr << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
