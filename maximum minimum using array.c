#include<stdio.h>
void main()
{
  int n,i,s[20],max,min;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the all elements(max 20)\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
  }
  max=s[0];
  min=s[0];
  for(i=0;i<n;i++)
  {
    if(max<s[i])
    {
     max=s[i];
    }
    if(min>s[i])
    {
     min=s[i];
    }
  }
  printf("The maximum number is=%d\n",max);
  printf("The minimum number is=%d\n",min);
}
