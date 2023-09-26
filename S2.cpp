#include<stdio.h>
#include<string.h>
struct stud
{
int rno;
char sname[20];
float per;
}s1[100],t;
int main()
{
	int i,n,j;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{		
	   printf("enter rno sname per");
	   scanf("%s%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);	
	}
	for(i=0;i<n;i++)
	 {
	for(j=0;j<i;j++)
	{
	   if(strcmp(s1[i].sname,s1[j].sname)<0)
	{
		t=s1[i];
		s1[i]=s1[j];
		s1[j]=t;
	}	 	
}	
}
for(i=0;i<n;i++)
{
	printf("\n %d   \t  %s  \t  %f",s1[i].rno,s1[i].sname,s1[i].per);

}
}
