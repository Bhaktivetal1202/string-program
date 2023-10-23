/* accept string and print the length with out string function */
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i,n=0;
	printf("enter string");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		n++;
	}
	printf("length of string=%d",n);
}
