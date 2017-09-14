#include"pi.h"
int main(void)
{
	double pi;
	double count;
	int k;

	double ip;
	const double n = 2*sqrt(2)/9801;
	
	count = 0;
	for (k=0;k < ITEM; k++)
	{
		count += item(k);
	}
	ip = n*count;
	pi = 1/ip;

	printf("%f\n",pi);
	return 0;
}
double item(int k)
{
	return fact(4*k)*(1103+26390*k)*1.0/(fact(k)^4)*(396^(4*k))*1.0;
}
int fact(int k)
{
	if (k > 0)
	{
		return k * fact(k - 1);
	}
	else
	{
		return 1;
	}
}
 
