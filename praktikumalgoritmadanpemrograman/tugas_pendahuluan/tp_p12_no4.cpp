#include<iostream>

using namespace std;

int main(){
	int m, n, i;
	int a[5]={8, 10, 2, 4, 6};
	
	cout<<"Data yang belum tersorting"<<endl;
	for(i=0; i<5; i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;
	for(m=0; m<=5; m++){
		for(i=0; i<=5; i++){
			if(a[i]>a[i+1]){
				n=a[i];
				a[i]=a[i+1];
				a[i+1]=n;
			}
		}
	}
	
	cout<<"Data yang sudah tersorting"<<endl;
		for(i=0; i<5; i++){
			cout<<a[i]<<" ";
		}
}
