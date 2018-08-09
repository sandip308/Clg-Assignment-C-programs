#include<stdio.h>
void main()
{
	int a[50][50],m,n,i,j;
	printf("Enter the row of matrix....\n");
	scanf("%d",&m);
	printf("Enter the coloumn of the matrix....\n");
	scanf("%d",&n);
	printf("Enter the elements of the matrix...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		  scanf("%d",&a[i][j]);	
		}
	}
	printf("The matrix is...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(m==n)
	{
		printf("The Transpose of this matrix is....\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
	}
	else if (n>m)
	{
		printf("The Transpose of this matrix is....\n");
		i=n;
		j=m;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
	}
	else if(m>n)
	{
		printf("The tranpose of a matrix is...\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
	}
}
