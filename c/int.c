// the storage of type intger
#include<stdio.h>
int max(void);
int min(void);
int main(void)
{
	printf("Type:int\n");
	printf("Max:%d\n",max());
	printf("Min:%d\n",min());
	return 0;
}
int max(void)
{
	int i = 0,q;
	do 
	{
		i++;
		q = i+1;
	}
	while (i < q);
	return i;
}
int min(void)
{
	int i = 0,q;
	do
	{
		i--;
		q = i-1;
	}
	while (i > q);
	return i;
}

