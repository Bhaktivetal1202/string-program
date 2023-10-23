/* accept string and display string character */
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i;
	printf("enter string:");
	gets(s1);
	printf("name=");
	for(i=0;s1[i]!='\0';i++)
	printf("\n %c",s1[i]);
}
