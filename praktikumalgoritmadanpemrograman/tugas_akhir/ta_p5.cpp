#include<iostream>

using namespace std;

int main(){
	int i, a=0, b=1, c;
	
	cout<<"======================================================"<<endl;
	cout<<"Program Menampilkan Bilangan Fibonacci Menggunakan For"<<endl;
	cout<<"======================================================"<<endl<<endl;
	
	cout<<"Fibonacci : "<<a<<" "<<b<<" ";
	for(i=1; i<=15; i++){
		c = a+b;
		a = b;
		b = c;
		cout<<c<<" ";
	}
}
