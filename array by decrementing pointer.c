#include<stdio.h>
main()
{
	int a[20],i,*ptr,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements...\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=&a[n-1];
	printf("Values of array by decrementing pointer is= \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*ptr);
		ptr--;
	}
}
