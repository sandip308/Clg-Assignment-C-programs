#include<stdio.h>
#include<string.h>
void rev(char s2[]);
main()
{
	char s[20];
	printf("Enter a string\n");
	scanf("%s",&s);
	rev(s);
}
void rev(char s2[])
{
	char ch[20];
	int i,j=0;
	for(i=strlen(s2)-1;i>=0;i--)
	{
	  ch[j]=s2[i];
	  j++;	
	}
	ch[j]=='\0';
	printf("The reverse of the string is=%s",ch);
}
