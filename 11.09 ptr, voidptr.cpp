#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char* func(char *q)
{
	printf("%s %c\n", q, *q);
	
	return q;
}

char* func2(char q[], int n)
{
	printf("%s %c\n", q, *q);
	
	return q;
}

void *func3(int a)
{
	printf("%d\n", a);
	char xrr[5]="sup";
	func2(xrr, a);
}

int main(void)
{
	char *aptr="hey";
	char arr[5]="yes";
	aptr=arr;
	printf("%s %c\n", aptr, *aptr);
	printf("%s %c\n", arr, *arr); 
		
	char brr[5]="what";
	char *bptr=brr;	
	char *cptr=func(bptr);
	printf("%s %c\n", cptr, *cptr);
	
	char crr[5]="hell";
	char *dptr=func2(crr, 5);
	printf("%s %c\n", dptr, *dptr);
	
	int a=10;
	func3(a);
    
	
	return 0;
}

