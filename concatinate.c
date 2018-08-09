#include<stdio.h>
int main()
{
	int i,j;
	char s1[50],s2[50],s3[50];
	printf("enter the string of s1\n");
	gets(s1);
	printf("enter the string of s2\n");
	gets(s2);
	j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		s3[j]=s1[i];
		j++;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		s3[j]=s2[i];
		j++;
	}
	s3[j]='\0';
	puts(s3);
}
