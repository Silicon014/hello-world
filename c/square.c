#include<stdio.h>
int w(int i);
int main(void)
{
int i;
printf("num:");
scanf("%d",&i);
i = w(i);
printf("square:%d\n",i);
return 0;
}
int w(int i)
{
i*=i;
return i;
}


