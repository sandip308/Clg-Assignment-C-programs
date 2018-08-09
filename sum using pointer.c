#include<stdio.h>
int sum(int * , int * );
int main()
{
	int a,b,p;
	printf("enter the two number\n");
	scanf("%d%d",&a,&b);
	p=sum(&a,&b);
	printf("the sum of the two number is=%d",p);
}
int sum(int *x, int *y)
{
	int ptr;
	
	ptr=*x+*y;
	return(ptr);
}
