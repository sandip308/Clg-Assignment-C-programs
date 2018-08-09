#include<stdio.h>
int main()
{
  int i,n,position,insertitem,a[50],temp[i];
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be inserted\n");
  scanf("%d",&insertitem);
  printf("Enter the position number\n");
  scanf("%d",&position);
  position=position-1;
  for(i=0;i<n;i++)
  {
    if(i<position)
    {
      temp[i]=a[i];
    }
    if(i>position)
    {
      temp[i]=a[i-1];
    }
    if(i==position)
    {
      temp[i]=insertitem;
    }
  }
  printf("After inserting the term the array is=\n");
  for (i=0;i<n;i++)
  {
   printf("%d\n",temp[i]);
 }
}
