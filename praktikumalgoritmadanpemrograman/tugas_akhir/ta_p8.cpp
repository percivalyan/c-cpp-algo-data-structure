#include<iostream>

using namespace std;

int main(){
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i,j;
	
	cout<<"=========================================="<<endl;
	cout<<"Program Menampilkan Bilangan Matriks 3 x 3"<<endl;
	cout<<"=========================================="<<endl<<endl;
	
	cout<<"Matriks 3x3 : "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
