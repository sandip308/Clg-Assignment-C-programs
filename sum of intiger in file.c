#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp1;
	int ch;
	int a[100];
	int i=0,s=0,n;
	fp1=fopen("sum.txt","w");
	if(fp1==NULL)
	{
		printf("File do not open\n");
		exit(0);
	}
	printf("Enter the range\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{		
	  scanf("%d",&a[i]);
	}
	
	while(ch=fscanf(fp1,"%d",&a[i])!=EOF)
	{
		i++;
		fprintf(fp1,"%d",ch);
	}
	
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("The sum is=%d\n",s);
	fclose(fp1);
}
