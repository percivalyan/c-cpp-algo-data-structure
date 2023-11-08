#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char c = 'C';
	
	if (isalpha (c))
		printf ("%c is alphabetical\n",c);
	else
		printf("%c is not alphabetical\n,c");
	return 0;
}
