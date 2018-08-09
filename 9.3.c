#include<stdio.h>
#include<stdlib.h>
struct stud
{
	char c[20];
	int roll, totalmarks;
} s2[50];
void main()
{
	int n,i;
	char ch;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	fflush(stdin);
	FILE *fp;
	fp=fopen("sandip.txt","w+");
	if(fp==NULL)
	{
		printf("File not open\n");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the student name\n");
		scanf("%s",s2[i].c);
		fflush(stdin);
		printf("Enter the roll no\n");
		scanf("%d",&s2[i].roll);
		fflush(stdin);
		printf("Enter the total marks\n");
		scanf("%d",&s2[i].totalmarks);
		fflush(stdin);
		fprintf(fp,"The name is =%s\n",s2[i].c);
	  fprintf(fp,"The roll is=%d\n",s2[i].roll);
		fprintf(fp,"The total marks is=%d\n",s2[i].totalmarks);
	}
	fseek(fp,0,SEEK_SET);
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}

	fclose(fp);
}
