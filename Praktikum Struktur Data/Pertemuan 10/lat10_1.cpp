#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

typedef struct node *simpul;
struct node {
    char Isi;
    simpul Next;
};

// Prototype Function
void Sisip_Depan(simpul &L, char elemen);
void Sisip_Belakang(simpul &L, char elemen);
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2);
void Hapus_Depan(simpul &L);
void Hapus_Belakang(simpul &L);
void Hapus_Tengah(simpul &L, char elemen);
void Cetak(simpul L);

// Function Main
int main() {
    char huruf, huruf2;
    simpul L = NULL;
    cout << "==OPERASI PADA SINGLE LINKED LIST==" << endl << endl;
    
    cout << "Tugas Praktikum Pertemuan 10 lat10_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;
	
	cout << "===============================================" << endl << endl;
    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl << endl;
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Depan(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Depan(L, huruf);
    Cetak(L);
	
	cout << "\n===============================================" << endl;
    // Sisip Belakang
    cout << "\nPenyisipan Simpul Di Belakang" << endl << endl;
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Huruf : "; cin >> huruf;
    Sisip_Belakang(L, huruf);
    Cetak(L);

	cout << "\n===============================================" << endl;
    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl << "Masukan Huruf : "; cin >> huruf;
    cout << "Disisip Setelah Huruf : "; cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(L, huruf, huruf2);
    Cetak(L);
	
	cout << "\n===============================================" << endl;
    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl << "Masukan Huruf : "; cin >> huruf;
    cout << "Disisip Sebelum Huruf : "; cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(L, huruf, huruf2);
    Cetak(L);
	
	cout << "\n===============================================" << endl;
    // Hapus Simpul Depan
    cout << endl << "Setelah Hapus Simpul Depan " << endl;
    Hapus_Depan(L);
    Cetak(L);

	cout << "\n===============================================" << endl;
    // Hapus Simpul Belakang
    cout << endl << "Setelah Hapus Simpul Belakang " << endl;
    Hapus_Belakang(L);
    Cetak(L);
	
	cout << "\n===============================================" << endl;
    // Hapus Simpul TENGAH
    cout << "\nMasukkan Huruf Tengah Yang akan dihapus : "; cin >> huruf;
    Hapus_Tengah(L, huruf);
    Cetak(L);
    
    cout << "\n===============================================" << endl;

    getch();
    return 0;
}

// Function Implementations

void Sisip_Depan(simpul &L, char elemen) {
    simpul baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else {
        baru->Next = L;
        L = baru;
    }
}

void Sisip_Tengah1(simpul &L, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (L == NULL)
        cout << "List Kosong ............." << endl;
    else {
        bool found = false;
        bantu = L;
        while (bantu != NULL) {
            if (bantu->Isi == elemen2) {
                found = true;
                break;
            }
            bantu = bantu->Next;
        }

        if (!found) {
            cout << "Elemen " << elemen2 << " tidak ditemukan dalam linked list." << endl;
            free(baru);
        } else {
            baru->Next = bantu->Next;
            bantu->Next = baru;
        }
    }
}

void Sisip_Tengah2(simpul &L, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->Next = NULL;
    if (L == NULL)
        cout << "List Kosong.............." << endl;
    else {
        bool found = false;
        bantu = L;
        while (bantu->Next != NULL) {
            if (bantu->Next->Isi == elemen2) {
                found = true;
                break;
            }
            bantu = bantu->Next;
        }

        if (!found) {
            cout << "Elemen " << elemen2 << " tidak ditemukan dalam linked list." << endl;
            free(baru);
        } else {
            baru->Next = bantu->Next;
            bantu->Next = baru;
        }
    }
}

void Sisip_Belakang(simpul &L, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else {
        bantu = L;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

void Cetak(simpul L) {
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong ........" << endl;
    else {
        bantu = L;
        cout << "Isi Linked List : ";
        while (bantu->Next != NULL) {
            cout << bantu->Isi << "-->";
            bantu = bantu->Next;
        }
        cout << bantu->Isi << endl;
    }
}

void Hapus_Depan(simpul &L) {
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}

void Hapus_Belakang(simpul &L) {
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        bantu = L;
        while (bantu->Next->Next != NULL) bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = NULL;
        free(hapus);
    }
}

void Hapus_Tengah(simpul &L, char elemen) {
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong.............";
    else {
        bool found = false;
        bantu = L;
        while (bantu->Next != NULL) {
            if (bantu->Next->Isi == elemen) {
                found = true;
                break;
            }
            bantu = bantu->Next;
        }

        if (!found) {
            cout << "Elemen " << elemen << " tidak ditemukan dalam linked list." << endl;
        } else {
            hapus = bantu->Next;
            bantu->Next = bantu->Next->Next;
            hapus->Next = NULL;
            free(hapus);
        }
    }
}

