#include<iostream>

using namespace std;

int main(){
	float Pi=3.14, r, volume, luas;
	
	cout<<"==========================================================="<<endl;
	cout<<"Program C++ Untuk Menghitung Volume dan luas Permukaan Bola"<<endl;
	cout<<"==========================================================="<<endl<<endl;
	
	cout<<"Masukan jari-jari (r) : ";
	cin>>r;
	cout<<endl;
	
	//Menghitung Volume
	volume=4/3*Pi*r*r*r;
	cout<<"Volume = 4/3 x Pi x r x r x r"<<endl;
	cout<<"Volume = 4/3 x "<<Pi<<" x "<<r<<" x "<<r<<" x "<<r<<endl;
	cout<<"Volume = "<<volume<<endl<<endl;
	
	//Menghitung Luas
	luas=4*Pi*r*r;
	cout<<"Luas = 4 x Pi x r x r"<<endl;
	cout<<"Luas = 4 x "<<Pi<<" x "<<r<<" x "<<r<<endl;
	cout<<"Luas = "<<luas<<endl;	
}

