#include<stdio.h>
#include<string.h>
main()
{
	char a[20],*temp;
	printf("Enter a string\n");
	scanf("%s",&a);
	temp=a;
	while(*temp!='\0')
	{
		printf("%c",*temp);
		temp++;
	}
}
