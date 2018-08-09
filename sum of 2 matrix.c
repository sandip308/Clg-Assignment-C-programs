#include<stdio.h>
int main()
{
	int i,j,m,n,a[100][100],b[100][100],s[100][100];
	printf("Enter the number of rows of matrix...1&...matrix..2\n ");
	scanf("%d",&m);
	printf("Enter the number of coloumn of matrix...1&...matrix..2\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix...1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of matrix...2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition of two matrix is=\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
    
}
