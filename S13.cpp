/* accept string and count lower character,digit,upper character and symbol */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s1[100];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("enter the string=");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(isupper(s1[i]))
		c1++;
		else if(islower(s1[i]))
		c2++;
		else if(isdigit(s1[i]))
		c3++;
		else 
		c4++;
	}
	printf("\n upeercase character=%d",c1);
	printf("\n lowercase character=%d",c2);
	printf("\n digit=%d",c3);
	printf("\n symbol=%d",c4);
}
