#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char a[100];
	int n;
	
	cout<<"Masukan karakter : "; cin.getline(a, 100);
	
	n=strlen(a);
	
	cout<<endl;
	cout<<"Kalimat/kata yang anda masukan mempunyai karakter berjumlah : "<<n;
}
