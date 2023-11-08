#include <iostream>
#include <iomanip>
using namespace std;

const int N = 100;

void Baca(int Nilai[], int &M);
void Cetak(int Nilai[], int M);
void Jumlah(int Nilai[], int M, int &Jlh, float &Rata);

void Identitas(){
	cout << "Tugas Praktikum Latihan 5_5" << endl;
    cout << "Nama    : Ryanda Deanova" << endl;
    cout << "NIM     : 211011450036" << endl;
    cout << "Kelas   : 04TPLP001" << endl << endl;
};

int main(){
    int M = 0;
    int Nilai[N];
    int Jlh = 0;
    float Rata;

    Identitas();

    cout<<"Banyak Elemen : ";
    cin>>M;

    cout<<"\nElemen Elemen :\n";
    Baca(Nilai, M); // memanggil fungsi Baca
    cout<<endl;
    Cetak(Nilai, M); // memanggil fungsi cetak
    cout<<endl;
    Jumlah(Nilai, M, Jlh, Rata); // memanggil fungsi Jumlah

    cout << "\nJumlah Bilangan : " << Jlh << endl;

    if (M>0) {
        cout<<"Rata-Rata Bilangan : "<<Rata<<endl;
    } else {
        cout<<"Rata-Rata Bilangan : Tidak dapat dihitung (M adalah nol)"<<endl;
    }

    return 0;
}

void Cetak(int Nilai[], int M){
    int i;
    for (i=0; i<M; i++)
    {
        cout << "Elemen ke-" << i+1 << " : " << Nilai[i] << endl; //i + 1
    }
}

void Baca(int Nilai[], int &M)
{
    int i;
    for (i=0; i<M; i++)
    {
        cout << "Elemen ke-" << i+1 << " : "; //i+1
        cin >> Nilai[i];
    }
}

void Jumlah(int Nilai[], int M, int &Jlh, float &Rata)
{
    int i;
    for (i=0; i<M; i++)
        Jlh += Nilai[i];

    if (M > 0) {
        Rata = static_cast<float>(Jlh) / M;
    } else {
        Rata = 0; // Set to 0 or any other suitable default value
    }
}

