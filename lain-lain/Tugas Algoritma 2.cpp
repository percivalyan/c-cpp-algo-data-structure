#include<iostream>

using namespace std;

/*
 Buatlah algoritma dan program C++ untuk menghitung upah mingguan karyawan. Masukan yang dibaca adalah
nama karyawan, golongan, dan jumlah jam kerja. Keluaran program adalah nama karyawan dan upahnya.
Ketentuan :
jam kerja normal = 48 jam
upah per jam :
Golongan A : Rp. 4000
Golongan B : Rp. 5000
Golongan C : Rp. 6000
Golongan D : Rp. 7000
upah lembur : Rp.3000/jam
*/

int main()
{
	cout<<"Menghitung Upah Mingguan Karyawan"<<endl;
	cout<<endl;
	
	string nama;
	char golongan;
	int jam_kerja, gaji_pokok, lembur, total_gaji;
	
	cout<<"Nama Karyawan : "; cin>>nama;
	cout<<"Jenis Golongan : "; cin>>golongan;
	cout<<"Total Jam Kerja :"; cin>>jam_kerja;
	
	//Upah Per Jam

	if (golongan=='A');
	{
		jam_kerja>48;
		gaji_pokok=48*4000;
		lembur=jam_kerja-48;
		total_gaji=gaji_pokok-lembur;
	}
	else if (golongan=='B');
	{
		jam_kerja>48;
		gaji_pokok=48*5000;
		lembur=jam_kerja-48;
		total_gaji=gaji_pokok-lembur;
	}	
}
