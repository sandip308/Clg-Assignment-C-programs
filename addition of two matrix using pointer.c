#include<stdio.h>
void main()
{
	int a[20][20],b[20][20],c[20][20],i,j,m,n,*ptr;
	printf("Emter the row of the matrix...1 & matrix...2\n");
	scanf("%d",&n);
	printf("Enter the coloumn of the matrix...1 & matrix...2\n");
	scanf("%d",&m);
	printf("Enter the elements of the matrix...1\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("Enter the elements of the matrix...2\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("The given of matrix 1....\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	printf("The given of matrix 2....\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",*(*(b+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			*(*(c+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
		}
	}
	printf("The addition of two matrix is=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",*(*(c+i)+j));
		}
		printf("\n");
	}
}
