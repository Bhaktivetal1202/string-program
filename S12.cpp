#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s1[100];
int i;
printf("enter string ");
gets(s1);
printf("output:");

for(i=0;s1[i]!='\0';i++)
{
	if(i%2==0)
printf("%c",s1[i]);

}
}

