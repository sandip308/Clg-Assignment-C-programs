#include<stdio.h>
int main()
{
  int n,i,arr[50],m,flag=0,count=0;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the number whose frequency to be searched\n");
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
    if(m==arr[i])
    {
      flag=1;
      count++;
    }
  }
    if(flag==1)
    {
      printf("The number %d is reapeated %d times",m,count);
    }
    else
    {
    printf("You entered wroung number\n");
    printf("Please enter a valid number and try again");
  }
}
