#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(char *a);

int main(void) 
{
   char str[81];
   gets(str);
   printf("%s\n", str);
   printf("%s\n", reverse(str));

   return 0;
}

char* reverse(char *a)
{
   int len = strlen(a);
   char* tmp = (char*)malloc(sizeof(char)*len + 1);
   // char tmp[len]; ºÒ°¡ 
   for(int i=0; i<len; i++) 
      tmp[i] = a[len-i-1];
   
    return tmp;
}
   /*
   char tmp;
   for(int i=0; i < len/2; i++) 
   {
    tmp = a[i];
    a[i] = a[(len - 1) - i];
    a[(len - 1) - i] = tmp;
   }
   return tmp;
   */
