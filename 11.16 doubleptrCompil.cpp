#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void funcfunc(char *a)
{
    int len = strlen(a);
    char* tmp = (char*)malloc(sizeof(char)*len + 1);
	tmp="hello";
	printf("tmp : %s\n", tmp);
}

void InputName(char* Name)
{
    Name="woods";
}

void xInputName(char** xName)
{
	*xName="Cabin";
}

void pInputName(char** pName)
{
//	**pName="suppp";
}

int main()
{
	char *asd="sello";
    char *Name="Name";
  	char *xName=NULL;
   	char **pName=NULL;
   
    InputName(xName);
 	xInputName(&Name);
//	pInputName(&pName);
   
    funcfunc(asd);
    printf("Name : %s\n", Name);
	printf("xName : %s\n", xName);
//	printf("pName : %s\n", pName);
	
	
	return 0;
}

