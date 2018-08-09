#include<stdio.h>
int main()
{
  int n,i, a[20],even,odd;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
      printf("The even number is=%d\n",a[i]);
    }
  }
  for(i=0;i<n;i++)
  {
      if(a[i]%2==1)
      {
        printf("The odd numbers is=%d\n",a[i]);
      }
    }
  }
