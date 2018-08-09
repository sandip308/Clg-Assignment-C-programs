#include<stdio.h>
int main()
{
	char s1[50],s2[50],s3[100],i,j;
	printf("enter 1st string:");
	gets(s1);
	printf("enter 2nd string:");
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
	printf("%s",s3);
	return 0;
}
