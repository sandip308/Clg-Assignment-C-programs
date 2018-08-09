#include<stdio.h>
void main()
{
  int i,n,j,a[100],k,flag=0;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;)
    {

    if(a[i]==a[j])
    {
      flag=1;
      for(k=j;k<n;k++)
      {
        a[k]=a[k+1];
      }
      n--;
    }
    else
    j++;
  }
}
  printf("After removing the elements the array will be=\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  if(flag==0)
  {
    printf("There will be no repeated term\n");
  }
}
