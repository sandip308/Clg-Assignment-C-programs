#include<stdio.h>
void swap(int * ,int *);
main()
{
   int a,b;
   printf("Enter two numbers\n");
   scanf("%d%d",&a,&b);
   swap(&a,&b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("The swap of this two numbers are=%d\n%d\n",*x,*y);
}
