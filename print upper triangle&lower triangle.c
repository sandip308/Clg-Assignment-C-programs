#include<stdio.h>
void main()
{
	int a[50][50],i,j,m,n;
	printf("Enter the rows & column\n");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of matrix.....\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The given matrix is....\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The upper triangle of this matrix is=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j>i)
			{
				printf("%d\n",a[i][j]);
			}
		}
	}
	printf("The Lower triangle of the matrix is=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i>j)
			{
				printf("%d\n",a[i][j]);
			}
		}
	}
	
}
