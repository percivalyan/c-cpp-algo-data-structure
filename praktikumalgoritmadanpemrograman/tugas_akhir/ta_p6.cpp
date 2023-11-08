#include<iostream>

using namespace std;

int main(){
	int i, a=0, b=1, c;
	
	cout<<"========================================================"<<endl;
	cout<<"Program Menampilkan Bilangan Fibonacci Menggunakan While"<<endl;
	cout<<"========================================================"<<endl<<endl;
	
	cout<<"Fibonacci : "<<a<<" "<<b<<" ";
	while(i<=14){
		c = a+b;
		a = b;
		b = c;
		cout<<c<<" ";
		i++;
	}
	cout<<endl;
}

