#include<stdio.h>
int main()
{
  int i,n,large,sp[50],temp[50],position=0,max,Avg;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&sp[i]);
  }
  large=sp[0];
  for(i=1;i<n;i++)
  {
    if(large<sp[i])
      {
      large=sp[i];
      position=i;
     }
  }

  for(i=0;i<n-1;i++)
  {
    if(i<position)
    {
      temp[i]=sp[i];
    }
    if(i>=position)
    {
      temp[i]=sp[i+1];
    }
  }
   max=temp[0];
    for(i=1;i<n-1;i++)
    {
      if(max<temp[i])
      {
        max=temp[i];
      }
    }
    printf("The best two numbers amoung this numbers are =%d\t%d\n",large,max);
    printf("The avarage number of 2 out of %d is %d+%d/2=%f\n",n,large,max,((large+max)/2.0));
}
