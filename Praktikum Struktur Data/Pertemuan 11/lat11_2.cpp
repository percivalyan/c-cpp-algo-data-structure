#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

typedef struct node *simpul;

struct node {
    char Isi;
    simpul kanan;
    simpul kiri;
};

// Prototipe Fungsi
void Sisip_Depan(simpul &DL, char elemen);
void Sisip_Belakang(simpul &DL, char elemen);
void Sisip_Tengah1(simpul &DL, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &DL, char elemen1, char elemen2);
void Hapus_Depan(simpul &DL);
void Hapus_Belakang(simpul &DL);
void Hapus_Tengah(simpul &DL, char elemen);
void Cetak(simpul DL);

// Fungsi Utama
int main() {
    char huruf, huruf2;
    simpul DL = NULL;
    int i;

    cout << "\t\t==OPERASI PADA DOUBLY LINKED LIST==\n\n";
    cout << "Tugas Praktikum Pertemuan 11 lat11_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    // Sisip Depan
    cout << "Penyisipan Simpul Di Depan" << endl << endl;
    for (i = 1; i <= 4; i++) {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Depan(DL, huruf);
    }
    Cetak(DL);

    // Sisip Belakang
    cout << "\n\nPenyisipan Simpul Di Belakang" << endl << endl;
    for (i = 1; i <= 4; i++) {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(DL, huruf);
    }
    Cetak(DL);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl << endl << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Setelah " << huruf2 << endl;
    Sisip_Tengah1(DL, huruf, huruf2);
    Cetak(DL);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl << endl << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    cout << huruf << " Disisip Sebelum " << huruf2 << endl;
    Sisip_Tengah2(DL, huruf, huruf2);
    Cetak(DL);

    // Hapus Simpul Depan
    cout << endl << endl << "Setelah Hapus Simpul Depan" << endl;
    Hapus_Depan(DL);
    Cetak(DL);

    // Hapus Simpul Belakang
    cout << endl << endl << "Setelah Hapus Simpul Belakang" << endl;
    Hapus_Belakang(DL);
    Cetak(DL);

    // Hapus Simpul Tengah
    cout << "\n\nMasukkan Huruf Tengah Yang akan dihapus : ";
    cin >> huruf;
    Hapus_Tengah(DL, huruf);
    Cetak(DL);

    getch();
    return 0;
}

// Fungsi Sisip Simpul Di Depan
void Sisip_Depan(simpul &DL, char elemen) {
    simpul baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL)
        DL = baru;
    else {
        baru->kanan = DL;
        DL->kiri = baru;
        DL = baru;
    }
}

// Fungsi Sisip Simpul Setelah Simpul Tertentu
void Sisip_Tengah1(simpul &DL, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL)
        cout << "List Kosong ............." << endl;
    else {
        bantu = DL;
        while (bantu->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

// Fungsi Sisip Simpul Sebelum Simpul Tertentu
void Sisip_Tengah2(simpul &DL, char elemen1, char elemen2) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen1;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL)
        cout << "List Kosong.............." << endl;
    else {
        bantu = DL;
        while (bantu->kanan->Isi != elemen2)
            bantu = bantu->kanan;
        baru->kanan = bantu->kanan;
        baru->kiri = bantu;
        bantu->kanan->kiri = baru;
        bantu->kanan = baru;
    }
}

// Fungsi Sisip Simpul Di Belakang
void Sisip_Belakang(simpul &DL, char elemen) {
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(node));
    baru->Isi = elemen;
    baru->kanan = NULL;
    baru->kiri = NULL;

    if (DL == NULL)
        DL = baru;
    else {
        bantu = DL;
        while (bantu->kanan != NULL)
            bantu = bantu->kanan;
        bantu->kanan = baru;
        baru->kiri = bantu;
    }
}

// Fungsi Mencetak Isi Linked List
void Cetak(simpul DL) {
    simpul bantu;
    if (DL == NULL)
        cout << "Linked List Kosong ........" << endl;
    else {
        bantu = DL;
        cout << "Isi Linked List : ";
        while (bantu->kanan != NULL) {
            cout << bantu->Isi << "<= =>";
            bantu = bantu->kanan;
        }
        cout << bantu->Isi;
    }
}

// Fungsi Hapus Simpul Depan
void Hapus_Depan(simpul &DL) {
    simpul Hapus;
    if (DL == NULL)
        cout << "Linked List Kosong.............";
    else {
        Hapus = DL;
        DL = DL->kanan;
        if (DL != NULL)
            DL->kiri = NULL;
        Hapus->kanan = NULL;
        free(Hapus);
    }
}

// Fungsi Hapus Simpul Belakang
void Hapus_Belakang(simpul &DL) {
    simpul bantu, hapus;
    if (DL == NULL)
        cout << "Linked List Kosong.............";
    else {
        bantu = DL;
        while (bantu->kanan->kanan != NULL)
            bantu = bantu->kanan;
        hapus = bantu->kanan;
        bantu->kanan = NULL;
        if (hapus != NULL)
            hapus->kiri = NULL;
        free(hapus);
    }
}

// Fungsi Hapus Simpul Di Tengah
void Hapus_Tengah(simpul &DL, char elemen) {
    simpul bantu, hapus;
    if (DL == NULL)
        cout << "Linked List Kosong.............";
    else {
        bantu = DL;
        while (bantu->kanan != NULL && bantu->Isi != elemen)
            bantu = bantu->kanan;
        if (bantu->Isi == elemen) {
            hapus = bantu;
            if (bantu->kiri != NULL)
                bantu->kiri->kanan = bantu->kanan;
            if (bantu->kanan != NULL)
                bantu->kanan->kiri = bantu->kiri;
            hapus->kanan = NULL;
            hapus->kiri = NULL;
            free(hapus);
        } else {
            cout << "Elemen tidak ditemukan dalam Linked List";
        }
    }
}

