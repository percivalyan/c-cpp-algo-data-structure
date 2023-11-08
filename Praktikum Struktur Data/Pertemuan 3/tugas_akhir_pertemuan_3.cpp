#include <iostream>
using namespace std;
struct Tinggal{
    char Jalan[50];
    char Kota[15];
    char Kode_Pos[5];
};
struct Tanggal{
    int Tanggal, Bulan, Tahun;
};
struct Biodata{
    char NIP[15];
    char Nama[25];
    char Agama[15];
    char Jabatan[30];
    char Unit_kerja[30];
    Tinggal Alamat;
    Tanggal Lahir;
    Tanggal Mulai_kerja;
};
int main(){
    Biodata Pegawai[5];
    int i;
    cout << "Tugas Akhir Pertemuan 3" << endl;
    cout << "Nama	: Ryanda Deanova" << endl;
    cout << "NIM	: 211011450036" << endl;
    cout << "Kelas 	: 04TPLP001" <<endl;
    
	cout << "\t\t\t Program Pendataan Karyawan " << endl;
    for (i = 0; i < 2; i++)
    {
    	cout << "\t\t Data Karyawan " << i+1;
		cout << "\n \t\t=============================================\n";
		cout << "\t\tNIP     : ";
		cin >> Pegawai[i].NIP;
		cin.ignore();
		cout << "\t\tNama    : ";
		cin.getline(Pegawai[i].Nama, sizeof(Pegawai[i].Nama));
		cout << "\t\tAlamat\n";
		cout << "\t\t\tJalan   : ";
		cin.getline(Pegawai[i].Alamat.Jalan, sizeof(Pegawai[i].Alamat.Jalan));
		cout << "\t\t\tKota    : ";
		cin.getline(Pegawai[i].Alamat.Kota, sizeof(Pegawai[i].Alamat.Kota));
		cout << "\t\t\tKode Pos: ";
		cin >> Pegawai[i].Alamat.Kode_Pos;
		cin.ignore();
		cout << "\t\tJabatan : ";
		cin.getline(Pegawai[i].Jabatan, sizeof(Pegawai[i].Jabatan));
		cout << "\t\tAgama   : ";
		cin >> Pegawai[i].Agama;
		cout << "\t\tTanggal Lahir\n";
		cout << "\t\t\tTanggal : ";
		cin >> Pegawai[i].Lahir.Tanggal;
		cout << "\t\t\tBulan   : ";
		cin >> Pegawai[i].Lahir.Bulan;
		cout << "\t\t\tTahun   : ";
		cin >> Pegawai[i].Lahir.Tahun;
		cout << "\t\tTanggal Mulai Kerja\n";
		cout << "\t\t\tTanggal : ";
		cin >> Pegawai[i].Mulai_kerja.Tanggal;
		cout << "\t\t\tBulan   : ";
		cin >> Pegawai[i].Mulai_kerja.Bulan;
		cout << "\t\t\tTahun   : ";
		cin >> Pegawai[i].Mulai_kerja.Tahun;
		cout << "\t\tUnit Kerja : ";
		cin.ignore();
		cin.getline(Pegawai[i].Unit_kerja, sizeof(Pegawai[i].Unit_kerja));
		cout << endl;
    }
    cout << "\t\t\t Cetak Data Karyawan " << endl;
    for (i = 0; i < 2; i++){
        cout << "========================== NIP " << Pegawai[i].NIP 
			 << " ========================== ";
        cout << endl;
        cout << "\n Nama         : " << Pegawai[i].Nama;
        cout << "\n Alamat       : " << Pegawai[i].Alamat.Jalan << ", " 
			 << Pegawai[i].Alamat.Kota << ", " << Pegawai[i].Alamat.Kode_Pos;
        cout << "\n Jabatan      : " << Pegawai[i].Jabatan;
        cout << "\n Agama        : " << Pegawai[i].Agama;
        cout << "\n Tgl Lahir    : " << Pegawai[i].Lahir.Tanggal << "-" 
			 << Pegawai[i].Lahir.Bulan << "-" << Pegawai[i].Lahir.Tahun;
        cout << "\n Tgl Mulai Krj: " << Pegawai[i].Mulai_kerja.Tanggal << "-" 
			 << Pegawai[i].Mulai_kerja.Bulan << "-" << Pegawai[i].Mulai_kerja.Tahun;
        cout << "\n Unit Kerja   : " << Pegawai[i].Unit_kerja;
        cout << endl;
        cout << "====================================================================
		==\n";
        cout << endl;
    }
    return 0;
}
