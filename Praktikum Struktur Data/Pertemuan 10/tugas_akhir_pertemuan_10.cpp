#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

typedef struct node1 *simpul1;
struct node1{
    char Isi;
    simpul1 Next;
};

typedef struct node2 *simpul2;
struct node2{
    char Isi;
    simpul2 kanan;
    simpul2 kiri;
};

void Sisip_Depan(simpul1 &L, char elemen);
void Sisip_Belakang(simpul1 &L, char elemen);
void Sisip_Tengah1(simpul1 &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul1 &L, char elemen1, char elemen2);
void Hapus_Depan(simpul1 &L);
void Hapus_Belakang(simpul1 &L);
void Hapus_Tengah(simpul1 &L, char elemen);
void Cetak(simpul1 L);

void Sisip_Depan(simpul2 &DL, char elemen);
void Sisip_Belakang(simpul2 &DL, char elemen);
void Sisip_Tengah1(simpul2 &DL, char elemen1, char elemen2);
void Sisip_Tengah2(simpul2 &DL, char elemen1, char elemen2);
void Hapus_Depan(simpul2 &DL);
void Hapus_Belakang(simpul2 &DL);
void Hapus_Tengah(simpul2 &DL, char elemen);
void Cetak(simpul2 DL);

int main(){
    char huruf, huruf2;
    simpul1 L = NULL; //Memastikan L kosong (Single Linked List)
    simpul2 DL = NULL; //Memastikan DL kosong (Doubly Linked List)
    int menu;
    
    do{
        system("cls");
        cout << "===== OPERASI SINGLY AND DOUBLY LINKED LIST =====" << endl;
	    cout << "Tugas Akhir Pertemuan 10" << endl;
	    cout << "=====================================" << endl;
    	cout << "Nama  : Ryanda Deanova" << endl;
    	cout << "NIM   : 211011450036" << endl;
    	cout << "Kelas : 04TPLP001" << endl;
    	cout << "=====================================" << endl << endl;
    
        cout << " ===== PROGRAM MENU  =====" << endl;
        cout << "1. Single Linked List" << endl;
        cout << "2. Doubly Linked List" << endl;
        cout << "3. Keluar Program" << endl;
        cout << "Pilih program (1-3): ";
        cin >> menu;

        switch (menu){
        case 1:
            //Program Single Linked List
            cout << "===== PROGRAM SINGLY LINKED LIST  ======" << endl << endl;

            cout << "Penyisipan Simpul Di Depan" << endl << endl;
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Depan(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Depan(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Depan(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Depan(L, huruf);
    		Cetak(L);

    		cout << "\n\nPenyisipan Simpul Di Belakang" << endl << endl;
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Belakang(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Belakang(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Belakang(L, huruf);
    		cout << "Masukkan Huruf : "; cin >> huruf;
    		Sisip_Belakang(L, huruf);
    		Cetak(L);

    		cout << endl << endl << "Masukkan Huruf : "; cin >> huruf;
    		cout << "Disisip Setelah Huruf : "; cin >> huruf2;
    		cout << huruf << " Disisip Setelah " << huruf2 << endl;
    		Sisip_Tengah1(L, huruf, huruf2);
    		Cetak(L);

    		cout << endl << endl << "Masukkan Huruf : "; cin >> huruf;
    		cout << "Disisip Sebelum Huruf : "; cin >> huruf2;
    		cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    		Sisip_Tengah2(L, huruf, huruf2);
    		Cetak(L);

    		cout << endl << endl << "Setelah Hapus Simpul Depan " << endl;
    		Hapus_Depan(L);
    		Cetak(L);

    		cout << endl << endl << "Setelah Hapus Simpul Belakang " << endl;
    		Hapus_Belakang(L);
    		Cetak(L);

    		cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : "; cin >> huruf;
    		Hapus_Tengah(L, huruf);
    		Cetak(L);

            break;

        case 2:
            //Program Doubly Linked List
            cout << "===== PROGRAM DOUBLY LINKED LIST =====" << endl << endl;
            int i;
    		cout << "Penyisipan Simpul Di Depan" << endl << endl;
    		for (i = 1; i <= 4; i++){
        	cout << "Masukan Huruf : "; cin >> huruf;
        	Sisip_Depan(DL, huruf);
   			}
    		Cetak(DL);

    		cout << "\n\nPenyisipan Simpul Di Belakang" << endl << endl;
    		for (i = 1; i <= 4; i++)  		{
        	cout << "Masukan Huruf : "; cin >> huruf;
        	Sisip_Belakang(DL, huruf);
    		}
    		Cetak(DL);

    		cout << endl << endl << "Masukkan Huruf : "; cin >> huruf;
    		cout << "Disisip Setelah Huruf : "; cin >> huruf2;
    		cout << huruf << " Disisip Setelah " << huruf2 << endl;
    		Sisip_Tengah1(DL, huruf, huruf2);
    		Cetak(DL);

    		cout << endl << endl << "Masukkan Huruf : "; cin >> huruf;
    		cout << "Disisip Sebelum Huruf : "; cin >> huruf2;
    		cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    		Sisip_Tengah2(DL, huruf, huruf2);
    		Cetak(DL);

    		cout << endl << endl << "Setelah Hapus Simpul Depan " << endl;
    		Hapus_Depan(DL);
    		Cetak(DL);

    		cout << endl << endl << "Setelah Hapus Simpul Belakang " << endl;
    		Hapus_Belakang(DL);
    		Cetak(DL);

    		cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : "; cin >> huruf;
    		Hapus_Tengah(DL, huruf);
    		Cetak(DL);
            break;

        case 3:
 			cout << "Program telah berakhir, terima kasih sudah menggunakan.";
            break;

        default:
            cout << "Pilihan tidak valid. Masukkan pilihan yang benar!!" << endl;
        }

        cout << "\n\nTekan Enter untuk melanjutkan...";
        cin.ignore(); 
        cin.get();    

    } while (menu != 0);

    return 0;
}

//Implementasi fungsi-fungsi untuk Single Linked List
void Sisip_Depan(simpul1 &L, char elemen){
	simpul1 baru = new node1;
    baru->Isi = elemen;
    baru->Next = L;
    L = baru;
}

void Sisip_Belakang(simpul1 &L, char elemen){
    simpul1 baru = new node1;
    baru->Isi = elemen;
    baru->Next = NULL;

    if (L == NULL){
        L = baru;
    }
    else{
        simpul1 bantu = L;
        while (bantu->Next != NULL)
        {
            bantu = bantu->Next;
        }
        bantu->Next = baru;
    }
}

void Sisip_Tengah1(simpul1 &L, char elemen1, char elemen2){
    simpul1 bantu, baru;
    baru = new node1;
    baru->Isi = elemen1;
    baru->Next = NULL;

    if (L == NULL){
        cout << "List Kosong ............." << endl;
    }
    else{
        bantu = L;
        while (bantu->Isi != elemen2 && bantu->Next != NULL){
            bantu = bantu->Next;
        }
        if (bantu->Isi != elemen2){
            cout << "Elemen " << elemen2 << " tidak ditemukan." << endl;
            delete baru;
            return;
        }
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

void Sisip_Tengah2(simpul1 &L, char elemen1, char elemen2){
	simpul1 bantu, baru;
    baru = new node1;
    baru->Isi = elemen1;
    baru->Next = NULL;

    if (L == NULL){
        cout << "List Kosong ............." << endl;
    }
    else{
        bantu = L;
        while (bantu->Next != NULL && bantu->Next->Isi != elemen2){
            bantu = bantu->Next;
        }
        if (bantu->Next == NULL){
            cout << "Elemen " << elemen2 << " tidak ditemukan." << endl;
            delete baru;
            return;
        }
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

void Hapus_Depan(simpul1 &L){
    if (L == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul1 Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        delete Hapus;
    }
}

void Hapus_Belakang(simpul1 &L){
    if (L == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul1 bantu = L;
        simpul1 hapus;

        if (bantu->Next == NULL){
            // Hapus elemen jika hanya ada satu elemen
            hapus = bantu;
            L = NULL;
        }
        else{
            while (bantu->Next->Next != NULL){
                bantu = bantu->Next;
            }
            hapus = bantu->Next;
            bantu->Next = NULL;
        }

        hapus->Next = NULL;
        delete hapus;
    }
}

void Hapus_Tengah(simpul1 &L, char elemen){
    if (L == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul1 bantu = L;
        simpul1 hapus = NULL;

        if (bantu->Isi == elemen){
            //Hapus elemen di depan
            hapus = bantu;
            L = bantu->Next;
        }
        else{
            while (bantu->Next != NULL && bantu->Next->Isi != elemen)
            {
                bantu = bantu->Next;
            }

            if (bantu->Next == NULL)
            {
                cout << "Elemen " << elemen << " tidak ditemukan." << endl;
                return;
            }

            hapus = bantu->Next;
            bantu->Next = bantu->Next->Next;
        }

        hapus->Next = NULL;
        delete hapus;
    }
}

void Cetak(simpul1 L){
 simpul1 bantu = L;
    while (bantu != NULL){
        cout << bantu->Isi << " -> ";
        bantu = bantu->Next;
    }
    cout << "NULL" << endl;
}

//Implementasi fungsi-fungsi untuk Doubly Linked List
void Sisip_Depan(simpul2 &DL, char elemen){
    simpul2 baru = new node2;
    baru->Isi = elemen;
    baru->kanan = DL;
    baru->kiri = NULL;

    if (DL != NULL)
    {
        DL->kiri = baru;
    }

    DL = baru;
}

void Sisip_Belakang(simpul2 &DL, char elemen){
    simpul2 baru = new node2;
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL)
    {
        DL = baru;
    }
    else
    {
        simpul2 bantu = DL;
        while (bantu->kanan != NULL)
        {
            bantu = bantu->kanan;
        }
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}

void Sisip_Tengah1(simpul2 &DL, char elemen1, char elemen2){
    simpul2 bantu, baru;
    baru = new node2;
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL){
        cout << "List Kosong ............." << endl;
    }
    else{
        bantu = DL;
        while (bantu->Isi != elemen2 && bantu->kanan != NULL){
            bantu = bantu->kanan;
        }
        if (bantu->Isi != elemen2){
            cout << "Elemen " << elemen2 << " tidak ditemukan." << endl;
            delete baru;
            return;
        }
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        if (bantu->kanan != NULL){
            bantu->kanan->kiri = baru;
        }
        bantu->kanan = baru;
    }
}

void Sisip_Tengah2(simpul2 &DL, char elemen1, char elemen2){
    simpul2 bantu, baru;
    baru = new node2;
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL){
        cout << "List Kosong ............." << endl;
    }
    else{
        bantu = DL;
        while (bantu->kanan != NULL && bantu->kanan->Isi != elemen2){
            bantu = bantu->kanan;
        }
        if (bantu->kanan == NULL){
            cout << "Elemen " << elemen2 << " tidak ditemukan." << endl;
            delete baru;
            return;
        }
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        if (bantu->kanan != NULL){
            bantu->kanan->kiri = baru;
        }
        bantu->kanan = baru;
    }
}

void Hapus_Depan(simpul2 &DL){
    if (DL == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul2 Hapus = DL;
        DL = DL->kanan;
        if (DL != NULL)
        {
            DL->kiri = NULL;
        }
        Hapus->kanan = NULL;
        Hapus->kiri = NULL;
        delete Hapus;
    }
}

void Hapus_Belakang(simpul2 &DL){
    if (DL == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul2 bantu = DL;
        simpul2 hapus;

        if (bantu->kanan == NULL){
            hapus = bantu;
            DL = NULL;
        }
        else{
            while (bantu->kanan->kanan != NULL)
            {
                bantu = bantu->kanan;
            }
            hapus = bantu->kanan;
            bantu->kanan = NULL;
        }

        hapus->kanan = NULL;
        hapus->kiri = NULL;
        delete hapus;
    }
}

void Hapus_Tengah(simpul2 &DL, char elemen){
    if (DL == NULL){
        cout << "Linked List Kosong............." << endl;
    }
    else{
        simpul2 bantu = DL;
        simpul2 hapus = NULL;

        while (bantu != NULL && bantu->Isi != elemen){
            bantu = bantu->kanan;
        }

        if (bantu == NULL){
            cout << "Elemen " << elemen << " tidak ditemukan." << endl;
            return;
        }

        hapus = bantu;
        if (bantu->kiri != NULL){
            bantu->kiri->kanan = bantu->kanan;
        }
        if (bantu->kanan != NULL){
            bantu->kanan->kiri = bantu->kiri;
        }

        hapus->kanan = NULL;
        hapus->kiri = NULL;
        delete hapus;
    }
}

void Cetak(simpul2 DL){
    simpul2 bantu;
    if (DL == NULL){
        cout << "Linked List Kosong ........" << endl;
    }
    else{
        bantu = DL;
        cout << "Isi Linked List : ";
        while (bantu->kanan != NULL)
        {
            cout << bantu->Isi << "<= =>";
            bantu = bantu->kanan;
        }
        cout << bantu->Isi;
    }
}
