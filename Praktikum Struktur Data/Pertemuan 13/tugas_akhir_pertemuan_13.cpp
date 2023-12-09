#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct node *simpul;
struct node
{
    char Isi;
    simpul Next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);

int main()
{
    char huruf;
    simpul L = NULL; //Pastikan bahwa L kosong
    int pilihan;
    
    do
    {
        system("cls");
        cout << "Tugas Akhir Pertemuan 13" << endl;
	    cout << "Program menu lat13_1" << endl;
	    cout << "=====================================" << endl;
	    cout << "Nama  : Ryanda Deanova" << endl;
	    cout << "NIM   : 211011450036" << endl;
	    cout << "Kelas : 04TPLP001" << endl;
	    cout << "=====================================" << endl;
	    
        cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl
             << endl;
        cout << "1. Sisip Belakang" << endl;
        cout << "2. Hapus Simpul Depan" << endl;
        cout << "3. Cetak Linked List" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih operasi (1-4): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            for (int i = 0; i < 3; ++i)
            {
                cout << "Masukkan Huruf: ";
                cin >> huruf;
                Sisip_Belakang(L, huruf);
            }
            break;
        case 2:
            Hapus_Depan(L);
            break;
        case 3:
            Cetak(L);
            break;
        case 4:
            cout << "Terima kasih sudah menggunakan.";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.";
        }

        if (pilihan != 4)
        {
            cout << "\n\nTekan tombol apapun untuk melanjutkan...";
            getch();
        }

    } while (pilihan != 4);

    return 0;
}

//Function Sisip Simpul Di Belakang
void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

//Function Mencetak Isi Linked List
void Cetak(simpul L)
{
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong..........\n";
    else
    {
        bantu = L;
        cout << "\nIsi Linked List : ";
        while (bantu->Next != NULL)
        {
            cout << bantu->Isi << "->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi;
    }
}

//Function Hapus Simpul Depan
void Hapus_Depan(simpul &L)
{
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong..........\n";
    else
    {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        free(Hapus);
        cout << "Simpul Depan Telah Dihapus.";
    }
}

