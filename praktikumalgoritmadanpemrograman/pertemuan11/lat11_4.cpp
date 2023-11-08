#include<iostream>
#include<iomanip>
using namespace std;

struct identitas{
	string nama, alamat, gender;
	char pil;
	float telepon;
};

int main(){
	loop:
	identitas siswa;
	
	cout<<"Masukkan Nama Siswa\t: "; cin>>siswa.nama;
	cout<<"Masukkan Alamat\t\t: "; cin>>siswa.alamat;
	cout<<"Masukkan Jenis Kelamin\t: "; cin>>siswa.gender;
	cout<<"Masukkan Telepon\t: "; cin>>siswa.telepon;
	cout<<endl;
	
	cout<<"Mau tambah data lagi [Y/T] : "; cin>>siswa.pil;
	cout<<endl;
	
	siswa.pil = toupper(siswa.pil);
	if(siswa.pil == 'Y')
	{
		goto loop;
 	} 
	else if(siswa.pil == 'N')
	{
		return 0;
	}
	
}
