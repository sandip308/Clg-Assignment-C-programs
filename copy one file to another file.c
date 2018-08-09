#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp1,*fp2;
	char a[50],ch;
	fp1=fopen("copy1.txt","w");
	if(fp1==NULL)
	{
		printf("File not open\n");
		exit(0);
	}
	printf("Enter the string\n");
	gets(a);
	fprintf(fp1,"%s",a);
	fclose(fp1);
	fp1=fopen("copy1.txt","r");
	fp2=fopen("copy2.txt","w");
	while(ch=fgetc(fp1)!=EOF)
	{
		fprintf(fp2,"%c",ch);
	}
	fclose(fp1);
	fclose(fp2);
	
}
