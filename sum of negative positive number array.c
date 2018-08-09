#include<stdio.h>
void main()
{
  int i,n,a[20],pos=0,neg=0;
  printf("Enter the size(max 20)\n");
  scanf("%d",&n );
  printf("Enter the all numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (i = 0; i <n; i++) {
    if(a[i]>=0)
    {
      pos=pos+a[i];
    }
    if(a[i]<0)
    {
      neg=neg+a[i];
    }
  }
  printf("Total sum of the positive and negative is=%d",(pos+neg));

}
