#include<stdio.h>
void main()
{
	int a[50][50],i,j,m,n,flag=1;
	printf("Enter the number of rows..\n");
	scanf("%d",&m);
	printf("Enter the number of coloumn\n");
	scanf("%d",&n);
	if(m==n)
	{
	
	printf("Enter the matrix elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(i==j && a[i][j]!=1)
		  {
			flag=0;
		  }
		  if(i!=j && a[i][j]!=0)
		  {
		  	flag=0;
		  }
	     }
	}
	if(flag==1)
	{
		printf("The matrix is Identity matrix\n");
	}
	else
	printf("The matrix is not Identity Matrix\n");
  }
  else
  printf("Identity matrix should be a squre matrix\n"); 
}
