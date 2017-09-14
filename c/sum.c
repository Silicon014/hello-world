//简单的加法
#include<stdio.h>
int main(void)
{
	long sum=0,num,i=0;
	do printf("Sum%ld:",++i);
	while (scanf("%ld",&num)&&(sum+=num));
	printf("Summed:%ld\n",sum);
	return 0;
} 
