#include <iostream>

using namespace std;

void MaximumSortMenaik(){
	int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;
    
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

void MaximumSortMenurun();
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imaks;
    
    identitas();
    
    cout<<"Metode Maximum Sort - Pengurutan Secara Menurun"<<endl;

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

void MinimumSortMenaik()
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

void MinimumSortMenurun()
{
    int Nilai[20];
    int i, j, N, l;
    int temp, U, Imin;
    
    identitas();
    
    cout<<"Metode Minimum Sort - Pengurutan Secara Menurun"<<endl;

    cout<<"Masukan Banyak Bilangan : ";
    cin>>N;
    for(i = 0; i < N; i++)
    {
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai[i];
    }

    // Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    // Proses Pengurutan
    U = N - 1;
    for(i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (j = i + 1; j <= U; j++)
        {
            if(Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imin];
        Nilai[Imin] = temp;
        U--;

//        cout << endl;
//        for (l = 0; l < N; l++)
//            cout << setw(3) << Nilai[l];
    }

    cout<<"\nData Setelah diurut : ";
    for(i = 0; i < N; i++)
        cout<<setw(3)<<Nilai[i];

    getch();
}

int main() {
    int pilihan;

    cout<<"Menu Program:"<<endl;
    cout<<"1. Metode Maximum Sort - Pengurutan Secara Menaik"<<endl;
    cout<<"2. Metode Maximum Sort - Pengurutan Secara Menurun"<<endl;
    cout<<"3. Metode Minimum Sort - Pengurutan Secara Menaik"<<endl;
    cout<<"4. Metode Minimum Sort - Pengurutan Secara Menaik"<<endl;
    cout<<"Pilih program (1-4): ";
    cin >> pilihan;

    if (pilihan == 1) {
        MaximumSortMenaik();
    } else if (pilihan == 2) {
        MaximumSortMenurun();
    } else if (pilihan == 3) {
       MinimumSortMenaik();
    } else if (pilihan == 4) {
        MinimumSortMenurun()
    } else {
        cout << "Pilihan tidak valid. Silakan pilih angka antara 1 hingga 4." << endl;
    }

    return 0;
}


