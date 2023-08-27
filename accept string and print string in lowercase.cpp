#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("enter string in uppercase");
	gets(s1);
	printf("\n lowercase string=%s",strlwr(s1));
	
}
