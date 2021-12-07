#include <stdio.h>
#include <stdlib.h>
int main()
{
	char string[100]="Dreams come true";
	char *ptr=string;
	int i=0, cnt=0;
//	printf("%c", *ptr);
//	printf("%c", *(ptr+1));
	
	for(; i < 100; i++,ptr++,cnt++)
	{
			printf("%c", *ptr);
			if(*ptr==NULL)
				break;
	}
	printf("\n");
	
	for(ptr--; cnt>=0; cnt--,ptr--)
		printf("%c", *ptr);
	
	return 0;
}
