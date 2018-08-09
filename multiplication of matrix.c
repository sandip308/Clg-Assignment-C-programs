#include<stdio.h>
void main()
{
	int a[50][50],b[50][50],row1,row2,col1,col2,i,j,s=0,k,mul[50][50];
	printf("Enter the number of row and coloumn of matrix 1....\n");
	scanf("%d%d",&row1,&col1);
	printf("Enter the number of row & column of matrix 2....\n");
	scanf("%d%d",&row2,&col2);
	if(row1==col2)
	{
	
	printf("Enter the elements of matrix 1.....\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the matrix 2....\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix...1 is....\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The matrix...2 is....\n");
	{
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
	}
	//multiplication of matrix
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			for(k=0;k<row2;k++)
			{
				s+=a[i][k]*b[k][j];
			}
			mul[i][j]=s;
			s=0;
		}
	}
	printf("The multiplication of matrix is....\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
  }
  else
  printf("The matrix multiplication is not possible\n");
}
