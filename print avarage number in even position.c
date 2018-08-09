#include<stdio.h>
void main()
{
  int i,s=0,a[50],n,count=0;
  float avg;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the all numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i%2==0)
    {
      count++;
      s=s+a[i];
    }
  }
  avg=(float)s/count;
  printf("The sum of all even position number is= %d\n",s);
  printf("The avarage of all even position number is= %d/%d\t=%f",s,count,avg);

}
