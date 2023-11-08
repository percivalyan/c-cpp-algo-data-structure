#include <iostream>
using namespace std;

//fungsi untuk menggandakan
void gandakanNilai(int* ptrNilai) {
    *ptrNilai *= 2; //Berarti ganda atau dikali 2, prinsipnya nilai x 2
}

void Identitas(){
	cout<<"Praktikum Struktur Data"<<endl;
	cout<<"Tugas Akhir Pertemuan 5"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;
}

int main() {
	int nilai;
	
	Identitas();
    
    cout<<"Program Menggandakan Nilai Bilangan Bulat"<<endl;
    cout<<"-----------------------------------------"<<endl;
    
    cout<<"Nilai awal: ";
    cin>>nilai;

    //Panggil fungsi gandakanNilai dengan menggunakan pointer
    gandakanNilai(&nilai);

    cout<<"Nilai setelah digandakan: "<<nilai<<endl;
    return 0;
}

