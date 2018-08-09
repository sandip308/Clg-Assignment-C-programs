#include<stdio.h>
void main()
{
	char a[20],b[20],*temp1,*temp2;
	int flag=0;
	printf("Enter the string..1\n");
	scanf("%s",&a);
	printf("Enter the string..2\n");
	scanf("%s",&b);
	temp1=a;
	temp2=b;
	while(*temp1!='\0'&&temp2!='\0')
	{
		if(*temp1!=*temp2)
		{
			flag++;
		}
		temp1++;
		temp2++;
	}
	if(flag==0)
	{
		printf("The string are equal\n");
	}
	else
	printf("The string are not equal\n");
}
