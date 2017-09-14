#include<stdio.h>
void nico(void);
int main(void)
{
	for(int i = 1;i<=3;i++)nico();puts("");
	for(int i = 1;i<=2;i++)nico();puts("");
	nico();puts("");
	return 0;
}
void nico(void)
{
	printf("Smile!");
}

