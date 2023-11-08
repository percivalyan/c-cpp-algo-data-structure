#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
	char asal[100];
	char hasil[100];
	cout<<"Masukan kalimat : ";
	gets(asal);	
	strcpy(hasil,asal);
	cout<<"Kalimat asli  : "<<asal<<endl;
	cout<<"Kalimat copy : "<<hasil;
}
