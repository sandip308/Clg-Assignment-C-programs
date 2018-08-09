#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *ptr;
	char c;
	ptr=fopen("abc.txt","r");
	while(1)
	{
		if(ptr==NULL)
		{
			printf("File not found\n");
			exit(0);
		}
		else
		{
			c=fgetc(ptr);
			if(c==EOF)
			{
				break;
			}
			printf("%c",c);
		}
	}
	fclose(ptr);
}
