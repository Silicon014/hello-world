#include<stdio.h>
void a(void);
void b(void);
void c(void);
int main(void)
{
a();
b();
c();
return 0;
}
void a(void)
{
printf("John Smith\n");
}
void b(void)
{
printf("John\nSmith\n");
}
void c(void)
{
printf("John ");
printf("Smith\n");
}

