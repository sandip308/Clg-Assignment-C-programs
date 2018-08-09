#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50],c[50]={0},flag=0;
	int i,j=0,n;
	printf("Enter a string\n");
	gets(ch);
	for(i=strlen(ch)-1;i>=0;i--)
	{
	  c[j]=ch[i];
	  j++;
	}
	c=='\0';
	if(strcmp(ch,c)==0)
	{
		flag=1;
		printf("The string is pallindrome\n");
	}
	if(flag==0)
	 printf("The string is not pallindrome\n");
}
