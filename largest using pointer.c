#include<stdio.h>
int largest(int * ,int *); 
int main()
{
	int a,b,*p;
	printf("enter any two numbers\n");
	scanf("%d%d",&a,&b);
	p=largest(&a,&b);
	printf("the largest number is=%d",*p);
}
int largest(int *x,int *y)
{
	
	return (*x>*y?x:y);
	
}
