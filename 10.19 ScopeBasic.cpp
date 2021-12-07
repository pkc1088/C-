#include <stdio.h>

int a=10;

int hey(int a)
{
	printf("%d\n", a);
	a+=10;
	return a;
}

int main(void)
{
	a+=10;
	printf("%d\n", hey(a));
}
