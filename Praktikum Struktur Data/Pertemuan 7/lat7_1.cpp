//Metode Maximum Sort 
//“Pengurutan Secara Menaik”
#include <iostream>
#include <conio.h> //getch
#include <iomanip>

using namespace std;  

void identitas(){
	cout << "Tugas Praktikum Pertemuan 7 lat7_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
};

//Menaik
int main(){
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;
    
    identitas();
    
	cout<<"Metode Maximum Sort - Pengurutan Secara Menaik"<<endl;
	
    cout<<"Masukkan Banyaknya Bilangan: ";
    cin>>N;

    for(i = 0; i < N; i++)
    {
        cout<<"Elemen ke-" <<i+1<< " : "; //+1
        cin>>Nilai[i];
    }

    //Proses Cetak sebelum diurutkan
    cout<<"\nData sebelum diurutkan: ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    //Proses Pengurutan
    U = N - 1;
    for(i = 0; i <= N - 2; i++)
    {
        Imaks = 0;
        for(j = 1; j <= U; j++)
        {
            if(Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        U--;
	//Perubahan (tidak diperlukan)
//        cout << endl;
//        for (l = 0; l < N; l++)
//            cout << setw(3) << Nilai[l];
    }
	
    cout<< "\nData Setelah diurutkan: ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    getch();
}


