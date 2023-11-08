#include <iostream>

using namespace std;

int main(){
	int i, n, a[100];
	
	for (i=0;i<=9;i++){
		n=i+1;
		a[i]=n*n;
		cout<<"Pangkat dari "<<n<<" adalah : "<<a[i]<<endl;
	}
}
