#include <stdio.h>
#include <string.h> 

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void permute(char *a, int l, int r)
{
	int i;
	if (l == r)
    	printf("%s\n", a);
	else
	{
    	for (i = l; i <= r; i++)
    	{
        swap((a+l), (a+i));
        permute(a, l+1, r);
        swap((a+l), (a+i)); 
    	}
	}
}
 
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}

/*#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void permute(string s , string answer)
{
    if(s.length() == 0)
    {
        cout<<answer<<"  ";
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }
 
}
 
int main()
{
    string s;
    string answer="";
 
    cout<<"Enter the string : ";
    cin>>s;
 
    cout<<"\nAll possible strings are : ";
    permute(s , answer);
    return 0;
}*/
