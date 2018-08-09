#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("sandip.txt","w");
	if(fp==NULL)
	{
		printf("File not open\n");
		exit(0);
	}
	fclose(fp);
}
