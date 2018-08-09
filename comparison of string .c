#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	int i,f=0;
	printf("enter a string\n");
	gets(s1);
	printf("enter a string of s2\n");
	gets(s2);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			f=1;
			break;
		}

	}
		if(f==1)
		{
			printf("the string is not equal\n");
		}
		else
		printf("the string is  equal\n");
}
