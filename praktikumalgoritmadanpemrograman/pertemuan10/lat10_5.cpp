#include <iostream>
using namespace std;
int main()
{
	int numbers[5], *p;
	p = numbers; *p=10;
	p++; *p=20;
	p = &numbers[2]; *p=30;
	p = numbers + 3; *p=40;
	p = numbers; *(p+10) = 50; //(p+4+6) = 50;
	for(int n=0; n <5; n++)
		cout<<numbers[n] <<", ";
	return 0;
}
