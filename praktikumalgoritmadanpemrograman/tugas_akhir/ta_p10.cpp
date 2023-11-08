#include<iostream>
#include<string.h>

using namespace std;

void jumlah(char *a){
	cout<<endl;
	int karakter = strlen(a);
	cout<<"Jumlah Karakter : "<<karakter;
}

int main(){
	char n[100];
	
	cout<<"=================================="<<endl;
	cout<<"Program Menghitung Jumlah Karakter"<<endl;
	cout<<"=================================="<<endl<<endl;
	
	cout<<"Masukan Nama : ";
	gets(n);
	
	cout<<endl;
	cout<<"Nama : "<<n<<endl;
	jumlah(n);
}
