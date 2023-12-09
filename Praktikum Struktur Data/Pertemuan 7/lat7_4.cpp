//Metode Minimum Sort 
//“Pengurutan Secara Menurun”
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void identitas(){
cout << "Tugas Praktikum Pertemuan 7 lat7_4" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
};

int main()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;
    
    identitas();
    
    cout<<"Metode Minimum Sort - Pengurutan Secara Menurun"<<endl;

    cout<<"Masukan Banyaknya Bilangan : ";
    cin>>N;
    for(i = 0; i < N; i++)
    {
        cout<<"Elemen ke -"<<i+1<<" : "; //+1
        cin>>Nilai[i];
    }
    //Proses Cetak Sebelum diurutkan
    cout<< "\nData Sebelum diurut : ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];
    //Proses pengurutan
    U = N - 1;
    for(i = 0; i <= N - 2; i++)
    {
        Imaks = i;
        for (j = i + 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
//        cout << endl;
//        for (l = 0; l < N; l++)
//            cout << setw(3) << Nilai[l];
    }
    cout<<"\nData Setelah diurut : ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];
    //return 0;
    getch();
}











