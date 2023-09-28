#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
char s1[100];
int i,flag=0,j;
printf("enter string");
gets(s1);

for(j=0;s1[j]!='\0';j++);

for(i=0,j=j-1;s1[i]!='\0';i++,j--)
{
if(s1[i]!=s1[j])
{
	flag=1; break;
	
}
}
if(flag==0)
printf("\n string is palindrome");
else
printf("\n string is not palindrome");

}

