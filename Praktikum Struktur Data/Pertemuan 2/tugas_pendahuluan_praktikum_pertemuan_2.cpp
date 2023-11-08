#include<iostream>

using namespace std;

int main() {
	int arr[2][2][2];
	
	cout << "Program Sederhana Array Tiga Dimensi!" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

	//Menginisialisasi elemen-elemen array tiga dimensi
	arr[0][0][0] = 36;
	arr[0][0][1] = 37;
	arr[0][1][0] = 38;
	arr[0][1][1] = 39;
	arr[1][0][0] = 40;
	arr[1][0][1] = 41;
	arr[1][1][0] = 42;
	arr[1][1][1] = 43;

	cout << "Isi variabel arr:" << endl;
  
	//Menampilkan elemen-elemen array
  	cout << "Element di [0][0][0]: " << arr[0][0][0] << endl;
  	cout << "Element di [0][0][1]: " << arr[0][0][1] << endl;
  	cout << "Element di [0][1][0]: " << arr[0][1][0] << endl;
  	cout << "Element di [0][1][1]: " << arr[0][1][1] << endl;
  	cout << "Element di [1][0][0]: " << arr[1][0][0] << endl;
  	cout << "Element di [1][0][1]: " << arr[1][0][1] << endl;
  	cout << "Element di [1][1][0]: " << arr[1][1][0] << endl;
  	cout << "Element di [1][1][1]: " << arr[1][1][1] << endl;

  	return 0;
}
