#include<stdio.h>
void main()
{
	char a[20],*temp;
	int l=0;
	printf("Enter a string\n");
	scanf("%s",&a);
	temp=a;
	while(*temp!='\0')
	{
		temp++;
		l++;
	}
	printf("The length of the string is=%d",l);
}
