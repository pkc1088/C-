#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[50];
	
	while(1)
	{
		printf("�����̸� : ");
		gets(str);
		char *p=str; 
		
		if(*p=='.')
			return 0;
		
		printf("�̴ϼ� : "); 
		printf("%c", toupper(*p) );		
		while(*p)
		{
			if(*p==' ')
				printf("%c", toupper(*++p) );
		
			p++;
		}
		printf("\n");
	}
    return 0;
}

