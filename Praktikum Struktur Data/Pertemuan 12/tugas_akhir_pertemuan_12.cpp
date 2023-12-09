#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string &str) {
    // Menghapus spasi dari kalimat
    string cleanedStr;
    for (size_t i = 0; i < str.length(); ++i) {
        if (!isspace(str[i])) {
            cleanedStr += str[i];
        }
    }

    // Mengubah semua huruf menjadi huruf kecil
    string lowercaseStr;
    for (size_t i = 0; i < cleanedStr.length(); ++i) {
        lowercaseStr += tolower(cleanedStr[i]);
    }

    // Memeriksa apakah kalimat merupakan palindrom
    int start = 0;
    int end = lowercaseStr.length() - 1;
    while (start < end) {
        if (lowercaseStr[start] != lowercaseStr[end]) {
            return false; // Kalimat bukan palindrom
        }
        start++;
        end--;
    }

    return true; // Kalimat adalah palindrom
}

int main() {
    string kalimat;
	cout << "Tugas Akhir Pertemuan 12" << endl;
    cout << "Program untuk mengetahui suatu kalimat adalah polindrom atau tidak!" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat merupakan palindrom." << endl;
        cout << "Hasil palindrom: " << kalimat << endl;
    } else {
        cout << "Kalimat bukan palindrom." << endl;
    }

    return 0;
}

