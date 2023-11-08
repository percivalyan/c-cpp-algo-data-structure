#include<stdio.h>

struct S1
{
	char *s;
	int i ;
	struct S1 *slp;
};
int main()
{
	static struct S1 a[]= {	
		{"ab", 1, a+1 },
		{"cd", 2, a+2},
		{"ef", 3, a+3},
		{"gh", 4, a+4},
		{"ij", 5, a+5},
		{"kl", 6, a+6},
		{"mn", 7, a+7},
		{"op", 8, a+8},
		{"qr", 9, a+9}
	};
	
	struct S1 *p = a;
	int i;
	printf("a *0+.s = %s p->= %s a[2].slp->s=%s\n", a[0].s, p->s, a[2].slp->s);
		for (i=0; i<3; i++){
			printf("—a*i+.i = %d ", --a[i].i);
			printf("++a*i+.s*3+ = %c\n ", ++a[i].s[3]);
		}
}
