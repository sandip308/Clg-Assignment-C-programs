#include<stdio.h>
int main()
{
int arr[20],i,n,s=0,avg;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements which you want to add\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
s=s+arr[i];
}
avg=(float)s/n;
printf("The average of sum is=%d",avg);
}
