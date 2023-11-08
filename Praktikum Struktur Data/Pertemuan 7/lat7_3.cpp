//Metode Minimum Sort 
//“Pengurutan Secara Menaik”
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void identitas(){
	cout<<"Tugas Praktikum Latihan 7_3"<<endl;
    cout<<"Nama    : Ryanda Deanova"<<endl;
    cout<<"NIM     : 211011450036"<<endl;
    cout<<"Kelas   : 04TPLP001"<<endl<<endl;
};
int main()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, Imin;
    
    identitas();
    
    cout<<"Metode Minimum Sort - Pengurutan Secara Menaik"<<endl;

    cout<<"Masukan Banyaknya Bilangan : ";
    cin>>N;

    for(i = 0; i < N; i++)
    {
        cout<<"Elemen ke-"<<i+1<<" : ";
        cin>>Nilai[i];
    }

    // Proses Cetak Sebelum Diurutkan
    cout<<"\nData sebelum diurut :";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    // Proses pengurutan
    for(i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for(j = i + 1; j < N; j++)
        {
            if(Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
//        cout << endl;
//        for (l = 0; l < N; l++)
//            cout << setw(3) << Nilai[l];
    }

    cout<<"\nData Setelah diurut : ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    getch();
}

