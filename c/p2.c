/*sum*/
#include<stdio.h>
int main(void)
{
	printf("Enter an integer to be summed(q to quit):");
	long sum = 0L,num;
	while(scanf("%ld",&num))
	{
		sum += num;
		printf("Next to be summed:");
	}
	printf("Sum:%ld\n",sum);
	return 0;
}

