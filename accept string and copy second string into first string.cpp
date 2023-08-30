#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("enter first string");
	gets(s1);
	printf("enter second string");
	gets(s2);
	strcpy(s1,s2);
	printf("\n first string=%s",s1);
	printf("\n second string=%s",s2);
}
