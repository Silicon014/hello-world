//将2的倍数转化为2^n形式
#include<stdio.h>
int main(void)
{
	long s;
	int i;
	printf("Enter the num please:");
	scanf("%ld",&s);
	while(s>1)
	{
		s/=2;
		i++;
	}
	printf(" = 2^%d\n",i);
	return 0;
} 
