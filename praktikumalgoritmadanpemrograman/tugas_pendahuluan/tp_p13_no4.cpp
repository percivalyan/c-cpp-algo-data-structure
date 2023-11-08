#include<iostream>

using namespace std;

int main()
{
	int n, flag=0, i=0, a[11]={36, 1, 8, 9, 10, 80, 84, 92, 99, 100, 200};
	
	cout<<"Masukkan nilai yang akan dicari : "; 
	cin>>n;
	while(i<=10) 
	{
		if(a[i]==n)
		{ flag=1; }
		i++;
	} 
	if(flag==1)
		{ cout<<"Data Ditemukan"; }
	else 
		cout<<"Data Tidak Ditemukan";
}
