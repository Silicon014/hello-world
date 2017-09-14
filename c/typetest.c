#include<stdio.h>
int main(void)
{
	int c;
	short i;
	long d;
	unsigned w;
	float q;
	double s;
	long long a;
	c = sizeof(int);
	printf("%d %o %x\n",c,c,c);
	return 0;
}

