#include<iostream>

using namespace std;

string nama(string a, string b){
	cout<<a<<" "<<b;
}

int main(){
	string a,b,c;
	
	cout<<"Masukan nama depan : ";
	cin>>a;
	cout<<"Masukan nama belakang : ";
	cin>>b;
	
	cout<<endl;
	cout<<"Nama anda ";
	nama(a, b);
}
