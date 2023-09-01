#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int k;
	printf("enter first string");
	gets(s1);
	printf("enter second string");
	gets(s2);
	k=strcmp(s1,s2);
	if(k==0)
	printf("strings are equal");
	if(k>0)
	printf("first string is greater...");
	if(k<0)
	printf("second string is greateer...");
}
