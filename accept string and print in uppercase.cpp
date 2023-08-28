#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	printf("enter string in lowercase");
	gets(s1);
	printf("\n lowercase string=%s",strupr(s1));
	
}
