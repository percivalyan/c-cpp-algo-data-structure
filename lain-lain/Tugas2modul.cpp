#include<iostream>

using namespace std;

int main()
{
	int i, angka;
	
	for(i=1; i<=512; i++)
	{
		cout<<angka<<" ";
		angka+=angka;
		i=angka-1;	
	}
}
