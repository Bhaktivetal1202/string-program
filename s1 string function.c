/* accept string and display length*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	int k;
	printf("enter string");
	gets(s1);
	k=strlen(s1);
	printf("length of string=%d",k);
}
