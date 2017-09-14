#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[40];
		
	printf("Hi! Whats your first name?\n");
	scanf("%s",&name);
	printf("%s,whats your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof(name);
	letters  = 
