#include<iostream>
main()
{
	cout<<"Menghitung Upah Mingguan Karyawan"; cout<<endl;
	
	string nama;
	char golongan;
	int jam_kerja, jam_lembur
	int gaji_pokok, gaji_lembur, total_gaji;
	
	cout<<"Nama Karyawan : "; cin>>nama; cout<<endl;
	cout<<"Jenis Golongan : "; cin>>golongan; cout<<endl;
	cout<<"Jumnlah Jam Kerja (0-48 jam) :"; cin>>jam_kerja; cout<<endl;
	cout<<"Jumlah Jam Lembur : "; cin>>jam_lembur; cout<<endl;
	
	//Upah Per Jam

	if (golongan == 'A');
	{
		gaji_pokok = 5000*jam_kerja
		gaji_lembur = 4000*jam_lembur
		total_gaji = gaji_pokok+gaji_lembur
	}
	else if (golongan == 'B');
	{
		gaji_pokok = 5000*jam_kerja
		gaji_lembur = 4000*jam_lembur
		total_gaji = gaji_pokok+gaji_lembur
	}	
	else if (golongan == 'C');
	{
		gaji_pokok = 5000*jam_kerja
		gaji_lembur = 4000*jam_lembur
		total_gaji = gaji_pokok+gaji_lembur
	}	
	else if (golongan == 'D');
	{
		gaji_pokok = 5000*jam_kerja
		gaji_lembur = 4000*jam_lembur
		total_gaji = gaji_pokok+gaji_lembur
	}	
	cout>>"Gaji yang diterima adalah"<<total_gaji;
}
