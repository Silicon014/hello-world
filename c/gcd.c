#include<stdio.h>

int gcd(int,int);

int main(void)
{
	int p , q ;
	int g;

	printf("Enter two integers:\n");
	printf("p = ");
	scanf("%d",&p);
	printf("q = ");
	scanf("%d",&q);
	printf("\n\n");
	if (p >= q)
		g = gcd(p,q);
	else
		g = gcd(q,p);
	printf("gcd = %d .\n",g);
	return 0;
}
int gcd(int p , int q)
{
	int r = 0;
	while (q != 0)
	{
		r = p % q;
		p = q;
		q = r;
	}
	return p;
}

