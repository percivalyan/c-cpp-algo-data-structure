#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int x, *p, **q;
	x =16; p = &x; q = &p; //x=10+6;
	cout<< **q;
	return 0;
}
