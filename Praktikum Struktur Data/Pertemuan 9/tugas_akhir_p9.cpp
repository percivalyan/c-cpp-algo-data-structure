//Buatlah program untuk mengurutkan sederetan data: suka, aku, sama, kamu, dulu, 
//sampai, dari, sekarang. Dengan menggunakan salah satu metode Shell Sort dan 
//Insertion Sort!

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

void Identitas(){
	cout << "Mengurutkan Beberapa Kata Menggunakan Metode Shell Sort" << endl;

    cout << "Tugas Akhir Pertemuan 9" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
}

//Fungsi untuk mengekstrak angka dari string
int extractNumber(const string& s) {
  	//Untuk menemukan indeks pertama karakter angka
  	size_t start = s.find_first_of("0123456789");
  	//Jika ditemukan, menggunakan stringstream untuk
  	//mengonversi string menjadi integer
  	if (start != string::npos) {
    	stringstream ss(s.substr(start));
    	int result;
    	//Jika konversi berhasil, mengembalikan nilai integer
    	if (ss >> result) {
      	return result;
    	}
  	}
  	//Return adalah nilai default atau untuk 
  	//menangani kasus ketika tidak ada nomor yang ditemukan
  	return 0;
}

//Fungsi untuk mengurutkan array menggunakan algoritma Shell Sort
void shellSort(string *arr, int n) {
  	int jarak = n / 2;
  	while (jarak > 0) {
	    for (int i = jarak; i < n; i++) {
	      	string angka = arr[i];
	      	int j = i - jarak;
	      	//Melakukan pertukaran elemen array 
		  	//berdasarkan nilai angka yang diekstrak
	      	while (j >= 0 && extractNumber(arr[j]) > extractNumber(angka)) {
	        	arr[j + jarak] = arr[j];
	        	j -= jarak;
	      	}
	      	arr[j + jarak] = angka;
	    }
	    jarak /= 2;
  	}
}

int main() {
  	//Array awal yang berisi string dengan format "kata (angka)"
  	string arr[] = {"suka (2)", "aku (1)", "sama (3)", "kamu (4)", 
  			"dulu (6)", "sampai (7)", "dari (5)", "sekarang (8)"};
  	int n = sizeof(arr) / sizeof(arr[0]);
	
	Identitas();	
  	//Menampilkan data awal
  	cout << "Data awal: ";
  	for (int i = 0; i < n; i++) {
    //Menghilangkan tanda kurung dan angka sebelum menampilkan
    	size_t pos = arr[i].find("(");
    	if (pos != string::npos) {
      	cout << arr[i].substr(0, pos) << " ";
    	} else {
      		cout << arr[i] << " ";
    	}
  	}
  	cout << endl;

  	//Menggunakan Metode Algoritma Shell Sort 
  	//untuk mengurutkan array berdasarkan angka
  	shellSort(arr, n);

  	//Menampilkan data setelah diurutkan
  	cout << "\nData setelah diurutkan: ";
  	for (int i = 0; i < n; i++) {
    	//Menghilangkan tanda kurung dan angka sebelum menampilkan
    	size_t pos = arr[i].find("(");
    	if (pos != string::npos) {
      		cout << arr[i].substr(0, pos) << " ";
    	} else {
      		cout << arr[i] << " ";
    	}
  	}
  	cout << endl;

  	return 0;
}
