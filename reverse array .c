#include<stdio.h>
int main()
{
  int a[100],n,i;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The reverse of the array is=\n");
  for(i=n-1;i>=0;i--)
  {
    printf("%d\n",a[i]);
  }
}
