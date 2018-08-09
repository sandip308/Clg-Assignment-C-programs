#include<stdio.h>
int largest(int * ,int *); 
int main()
{
	int a,b,*p;
	printf("enter any two numbers\n");
	scanf("%d",&a,&b);
	p=largest(&a,&b);
	printf("the largest number is=%d",*p);
}
int main(int*x,int*y);
{
	if(*x>*y)
	return *x;
	else
	return *y;
}
