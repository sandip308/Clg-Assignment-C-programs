#include<stdio.h>
void main()
{
  int i,j,n,arr[50],large,small;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  large=arr[0];
  small=arr[0];
  for(i=0;i<n;i++)
  {
    if(large<arr[i])
    {
      large=arr[i];
    }
    if(small>arr[i])
    {
      small=arr[i];
    }
  }
  printf("The largest difference of given array is =%d",(large-small));
}
