#include <iostream>
#include <iomanip>

using namespace std;

struct karyawan_str{
	char nama[25], status;
	long int gaji, anak;
};

int main(){
	karyawan_str karyawan[30];
	int i, n=0;
	char ulangi='y';
	
	cout<<"==========================="<<endl;
	cout<<"Program Tabel Data Karyawan"<<endl;
	cout<<"==========================="<<endl<<endl;
	
	for(i=1; i<30 && ulangi=='y'; i++){
		cout<<"Masukan Nama Karyawan : ";
		cin.getline(karyawan[i].nama,80,'\n');
		cout<<"Gaji/bulan : ";
		cin>>karyawan[i].gaji,80,'\n';
		cout<<"Status Menikah (y/t) : ";
		cin>>karyawan[i].status,80,'\n';
		if(karyawan[i].status=='y'){
			cout<<"Jumlah anak : ";
			cin>>karyawan[i].anak;
		}
		cout<<endl;
		n++;
		cout<<"Tambah Data Lagi? (y/t) : ";
		cin>>ulangi;
		cin.ignore(80,'\n');
	}
	cout<<"\n\n\t\t\tDATA KARYAWAN\n";
	cout<<"_______________________________________________________________________\n";
	cout<<"No\tNama Karyawan\t\tGaji\t\tStatus\t\tAnak\n";
	cout<<"_______________________________________________________________________\n";
	for(i=1; i<=n; i++){
		cout<<i<<setw(20)<<karyawan[i].nama<<setw(15)<<karyawan[i].gaji<<setw(20);
		if(karyawan[i].status=='y'){
			cout<<"Menikah\t\t  "<<karyawan[i].anak<<endl;
		}
		else{
			cout<<"Belum Menikah\n";
		}
	}
	cout<<"_______________________________________________________________________\n";

}
