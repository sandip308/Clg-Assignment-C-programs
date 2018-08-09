#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr;
	ptr=(char*)malloc(5*sizeof (char));
	printf("Enter the text\n");
	scanf("%s",ptr);
	printf("The text is=%s",ptr);
	
}
