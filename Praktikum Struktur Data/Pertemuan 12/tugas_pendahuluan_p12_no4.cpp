#include <iostream>
#include <stack>

using namespace std;

int main() {
    //Membuat objek stack dengan tipe data int
    stack<int> myStack;
    
    cout << "Tugas Pendahuluan Pertemuan 12 No. 4" << endl;
    cout << "Tuliskan contoh program pada operasi Empty" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    //Memeriksa apakah stack kosong
    if (myStack.empty()) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Stack tidak kosong." << endl;
    }
	
	cout << "=========================================" << endl;
	
    //Menambahkan beberapa elemen ke dalam stack
    myStack.push(42);
    myStack.push(17);
    myStack.push(30);

    //Memeriksa kembali setelah menambahkan elemen
    if (myStack.empty()) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Stack tidak kosong." << endl;
    }

    //Menampilkan elemen-elemen dalam stack
    cout << "Elemen-elemen dalam stack: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}

