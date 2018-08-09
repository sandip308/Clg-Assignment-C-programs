#include<stdio.h>
int main()
{
	char s1[50],s2[50],x;
	
	
	printf("enter a string\n");
	gets(s1);
	printf("enter a string of s2\n");
	gets(s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("the string is equal\n");
	else
	printf("the string is no equal\n");
}
