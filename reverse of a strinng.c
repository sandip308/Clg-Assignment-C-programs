#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	int i,j=0;
	printf("Enter a string\n");
	gets (s1);
	for(i=strlen(s1)-1;i>=0;i--)
	{
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
	printf("the reverse of a given string is=%s",s2);
}
