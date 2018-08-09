#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,s=0,n,*ptr;
	printf("Enter the number\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unsufficent Memory\n");
		exit(0);
	}
	printf("Enter the array elements\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",(ptr+i));
	 	s=s+ *(ptr+i);
	 }
	 printf("The sum is=%d",s);
	 free(ptr);
	 return (0);
}
