#include <iostream>
#include <stack>

using namespace std;

//Fungsi untuk mengkonversi desimal ke biner
void desimalKeBiner(int angkaDesimal) {
    stack<int> stackBiner;

    //Mengonversi desimal ke biner dengan menggunakan stack
    while (angkaDesimal > 0) {
        int sisa = angkaDesimal % 2;
        stackBiner.push(sisa);
        angkaDesimal /= 2;
    }

    //Menampilkan hasil konversi
    cout << "Hasil konversi: ";
    while (!stackBiner.empty()) {
        cout << stackBiner.top();
        stackBiner.pop();
    }
    cout << endl;
}

int main() {
    int angkaDesimal;
    
       
    cout << "Tugas Akhir Pertemuan 11" << endl;
    cout << "Konversi Desimal ke Biner" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;

    //Meminta pengguna memasukkan bilangan desimal
    cout << "Masukkan bilangan desimal: ";
    cin >> angkaDesimal;

    //Memanggil fungsi untuk mengkonversi desimal ke biner
    desimalKeBiner(angkaDesimal);

    return 0;
}

