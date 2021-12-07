#include <stdio.h>

void Recursive(int n)
{
	if(n==0)
		return;
		
	printf("%d\n", n);
	Recursive(n-1);
}

int main(void)
{
	Recursive(3);
	
    return 0;
}

