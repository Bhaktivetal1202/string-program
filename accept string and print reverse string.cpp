#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("enter the string");
	gets(s1);
	printf("\n reverse string=%s",strrev(s1));
}
