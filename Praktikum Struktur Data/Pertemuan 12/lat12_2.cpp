#include <iostream>
#include <cstdlib> // Added for malloc and free
#include <cstring>
using namespace std;

#define true 1
#define false 0

const int MaxS = 100;

// Stack structure for lat11_1 and lat11_2
struct Stack
{
    char Isi[MaxS];
    int Top;
};

// Node structure for lat12_1
struct node
{
    char Isi;
    struct node *next;
};

// Function declarations
void INITStack(Stack &S);
void PUSH(Stack &S, char Data);
void POP(Stack &S, char &Hsl);
void CETAK(Stack S);

void Sisip_Belakang(struct node *&L, char elemen);
void Hapus_Belakang(struct node *&L);
void Cetak(struct node *L);

void INITS(Stack &S)
{
    S.Top = 0;
}

void PUSH(Stack &S, char Data)
{
    if (S.Top < MaxS - 1)
    {
        S.Top++;
        S.Isi[S.Top] = Data;
    }
    else
        cout << "Stack penuh.........." << endl;
}

void CETAK(Stack S)
{
    int i;
    cout << endl
         << "Isi Stack : ";
    if (S.Top != 0)
    {
        for (i = 1; i <= S.Top; i++)
        {
            cout << S.Isi[i];
        }
    }
    else
        cout << "Stack Kosong ….." << endl;
}

void POP(Stack &S, char &Hsl)
{
    if (S.Top != 0)
    {
        Hsl = S.Isi[S.Top];
        S.Top--;
    }
    else
        cout << "Stack Kosong…..";
}

void lat11_1()
{
    char huruf;
    Stack S;
    INITS(S);
    
    cout << "Menghapus Elemen Stack dengan menggunakan Array" << endl;
    cout << "Tugas Praktikum Pertemuan 11 lat11_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    cout << "Masukan Karakter :";
    cin >> huruf;
    PUSH(S, huruf);
    cout << "Masukan Karakter :";
    cin >> huruf;
    PUSH(S, huruf);
    cout << "Masukan Karakter :";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus ........." << huruf;

    CETAK(S);

    cout << endl
         << "Masukan Karakter :";
    cin >> huruf;
    PUSH(S, huruf);
    cout << "Masukan karakter :";
    cin >> huruf;
    PUSH(S, huruf);
    cout << "Masukan karakter :";
    cin >> huruf;
    PUSH(S, huruf);

    CETAK(S);

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus .........." << huruf;

    CETAK(S);
}

void lat11_2()
{
    Stack S;
    INITStack(S);

    char kalimat[MaxS];

    cout << "Pembalik Kalimat" << endl;
    cout << "Tugas Praktikum Pertemuan 11 lat11_2" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    cout << "Masukkan kalimat: ";
    cin.ignore(); // Ignore newline character from previous input
    cin.getline(kalimat, MaxS);

    // Push characters into the stack
    for (int i = 0; i < strlen(kalimat); i++)
    {
        PUSH(S, kalimat[i]);
    }

    // Pop characters from the stack to print the reversed sentence
    cout << "Kalimat terbalik: ";
    while (S.Top != 0)
    {
        char karakter;
        POP(S, karakter);
        cout << karakter;
    }

    cout << endl;
}

void INITStack(Stack &S)
{
    S.Top = 0;
}

void lat12_1()
{
    char huruf;
    struct node *L = NULL; // Ensure that L is empty
    cout << "Operasi Single Linked List pada Stack:\n\n";

    cout << "Tugas Praktikum Pertemuan 12 lat12_1" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    //==================
    //==Sisip Belakang==
    //==================
    cout << "Penyiapan Stack " << endl
         << endl;
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    cout << "Masukan Elemen : ";
    cin >> huruf;
    Sisip_Belakang(L, huruf);
    Cetak(L);

    //=========================
    //==Hapus Simpul Belakang==
    //=========================
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl
         << endl
         << "Hapus Elemen " << endl;
    Hapus_Belakang(L);
    Cetak(L);
}

void Sisip_Belakang(struct node *&L, char elemen)
{
    struct node *bantu, *baru;
    baru = (struct node *)malloc(sizeof(struct node));
    baru->Isi = elemen;
    baru->next = NULL;

    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->next != NULL)
            bantu = bantu->next;
        bantu->next = baru;
    }
}

void Hapus_Belakang(struct node *&L)
{
    struct node *bantu, *hapus;
    if (L == NULL)
        cout << "Linked List Kosong...........";
    else
    {
        bantu = L;
        while (bantu->next->next != NULL)
            bantu = bantu->next;
        hapus = bantu->next;
        bantu->next = NULL;
        free(hapus);
    }
}

void Cetak(struct node *L)
{
    struct node *bantu;
    if (L == NULL)
        cout << "Linked List Kosong ……….." << endl;
    else
    {
        bantu = L;
        cout << endl
             << "Isi Linked List : ";
        while (bantu->next != NULL)
        {
            cout << bantu->Isi << "->";
            bantu = bantu->next;
        }
        cout << bantu->Isi;
    }
}

int main()
{
    int program;
    cout << "Menu Program Pertemuan 11 dan 12" << endl;
    
    cout << "Tugas Praktikum Pertemuan 12 lat12_2" << endl;
    cout << "=====================================" << endl;
    cout << "Nama  : Ryanda Deanova" << endl;
    cout << "NIM   : 211011450036" << endl;
    cout << "Kelas : 04TPLP001" << endl;
    cout << "=====================================" << endl << endl;

    do
    {
    	cout << "Pilihan menu:" << endl;
	    cout << "1. Menghapus Elemen Stack dengan menggunakan Array" << endl;
	    cout << "2. Membalik Karakter menggunakan Stack" << endl;
	    cout << "3. Stack dengan menggunakan Singly Linked List" << endl;
	    cout << "4. Keluar" << endl;
	    
        //Minta
        cout << "Masukkan program (1, 2, 3, dan 4): ";
        cin >> program;

        //Cetak
        if (program == 1)
        {
            lat11_1();
            cout << "========================================" << endl;
        }
        else if (program == 2)
        {
            lat11_2();
            cout << "========================================" << endl;
        }
        else if (program == 3)
        {
            lat12_1();
            cout << "========================================" << endl;
        }
        else if (program == 4)
        {
            cout << endl << "Anda Keluar Program. Terima Kasih." << endl;
            cout << "========================================" << endl;
            return 0;
        } else {
        	cout << endl << "========================================" << endl;
        	cout << "Input lagi!!!" << endl;
        	cout << "========================================" << endl << endl;
		}

    } while (program != 4);
    
}

