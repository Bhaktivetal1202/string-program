#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i;
	printf("enter string in uppercase");
	gets(s1);
	printf("output=");
	printf("lowercase output= ");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]+32);
	}
}
