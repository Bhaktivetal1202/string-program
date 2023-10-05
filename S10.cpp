#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],ch;
int i,p;
printf("enter string:");
gets(s1);
printf("enter character");
scanf("%c",&ch);
printf("enter position");
scanf("%d",&p);
for(i=0;s1[i]!='\0';i++);
for(i=i;i>=p;i--)
{
s1[i+1]=s1[i];
}
s1[p]=ch;
printf("\n new string=%s",s1);

}
