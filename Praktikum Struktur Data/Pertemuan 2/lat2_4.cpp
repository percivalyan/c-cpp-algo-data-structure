#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int Nilai [ 20 ];
	int Posisi [ 20 ];
	int i, N, Bilangan, Banyak=0;
	bool ketemu;

	cout<<"Masukan Banyaknya Bilangan = ";
	cin>>N;
	cout<<endl;
	//Membaca elemen Array
	for (i=0; i<N ;i++){
		cout<<"Masukan elemen ke-"<<i+1<<" = "; //i ditambah 1
		cin>>Nilai [i];
	}
	//Membaca Elemen Array
	cout<<"\n\nDeretan Bilangan = ";
	for (i=0; i<N; i++)
 		cout<<Nilai [i]<<" ";
		cout<<"\n\nMasukan Bilangan yang akan dicabut = ";
		cin>>Bilangan ;
	//Melakukan pencarian
	for(i=0; i<N; i++){
		if(Nilai [i]==Bilangan){
			ketemu = true;
			Posisi [Banyak]=i;
			Banyak++;
		}
	}
	if(ketemu){
		cout<<"Bilangan "<< Bilangan<<" ditentukan sebanyak "<< Banyak;
		cout<<"\npada posisi ke = ";
		for(i=0; i<Banyak ; i++)
			cout<<Posisi [i]+1<<" "; //i ditambah 1
	}
	else
 		cout<<"Bilangan "<<Bilangan<<"tidak ditemukan";
		getch ();
}
