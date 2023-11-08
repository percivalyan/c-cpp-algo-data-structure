#include<iostream>

using namespace std;

int main(){
	
	cout<<"========================"<<endl;
	cout<<"Program Mengurutkan Data"<<endl;
	cout<<"========================"<<endl<<endl;
	
	int a[10] = {4, 8, 5, 9, 6, 2, 7, 5, 9, 5};
	int n, m, i;
	
	cout<<"Data yang belum tersorting (acak)"<<endl;
	for(i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	for(n=0; n<10; n++){
		for(i=0; i<9; i++){
			if (a[i]<a[i+1]){
				m=a[i];
				a[i]=a[i+1];
				a[i+1]=m;
			}
		}
	}
	
	cout<<"Data yang sudah tersorting (urut dari besar ke kecil)"<<endl;
	for(i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
}

