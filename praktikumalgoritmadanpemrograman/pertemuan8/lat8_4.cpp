#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Input baris "<<i+1<<" kolom "<<j+1<<" = "; cin>>a[i][j];
		}	
	}
	cout<<endl;
	cout<<"Matrik 3x3 = "<<endl; 
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++){
			cout<<setw(4)<<a[i][j]<<" ";
		}
	cout<<endl<<endl;
	}
}
