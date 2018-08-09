#include<stdio.h>
void main()
{
	int i,j;
	char temp[100],s1[100],s2[100];
	printf("Enter a string of s1\n");
	scanf("%s",&s1);
	printf("Enter a string of s2\n");
	scanf("%s",&s2);
	for(i=0;s1[i]!='\0';i++)
	{
		temp[i]=s1[i];
	}
	temp[i]='\0';
	for(i=0;s2[i]!='\0';i++)
	{
		s1[i]=s2[i];
	}
	s1[i]='\0';
	for(i=0;temp[i]!='\0';i++)
	{
		s2[i]=temp[i];
	}
	s2[i]='\0';
	printf("After swapping the sting is=");
	printf("string 1.......%s\n",s1);
	printf("string 2.......%s\n",s2);
}
