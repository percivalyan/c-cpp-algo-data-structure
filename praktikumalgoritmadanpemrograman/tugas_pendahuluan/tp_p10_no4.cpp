#include<iostream>
#include<conio.h>

using namespace std;

int double_it(int *a, int *b){
	*a *=3;
	*b *=6;
}

int main(void){
	int a, b;
	
	cout<<"Masukan nilai a : "; 
	cin>>a;
	cout<<"Masukan nilai b : ";
	cin>>b;
	double_it(&a,&b);
	
	cout<<endl;
	cout<<"Hasil penggunaan pointer : "<<endl;
	cout<<"a * 3 = "<<a<<endl;
	cout<<"b * 6 = "<<b<<endl;
}
