#include<stdio.h>
#include<math.h>

#define LOWER 1e-15

double fact (double);
double count(double);
double pow  (double,double);

int main(void)
{
	double k = 1.0;
	double item , summed;
	double pi;

	item = count (k);
	summed = item;
	printf("Enter loop:summed = %f.\n",summed);
	while (item >= LOWER)
	{
		++k;
		item = count(k);
		summed += item;
	}
//	printf("Exit loop:summed = %f.\n",summed);
	pi = sqrt(2)*2.0 / 9801;
	pi *= summed;
	pi = 1.0 / pi;
	printf("%f\n",pi);
	return 0;
}
double fact(double k)
{
	if (k > 0)
	{
		return k  * fact(k-1.0);
	}
	else
	{
		return 1.0;
	}
}
double count(double k)
{
	return	(fact(4.0*k)*(1103.0 + 26390.0* k)) 	/ 
		(pow(fact(k),4.0)*pow(396.0,4.0*k))	;
}
double pow(double x,double y)
{
	double n = 1;
	while (y > 0)
	{
		y--;
		n *= x;
	}
	return n;
}

