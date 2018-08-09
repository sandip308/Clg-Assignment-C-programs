#include<stdio.h>
int main()
{
  int i,n,temp2,k=0,arr1[50],arr2[50],temp[100],s,m=1;
  printf("Enter the size of the array1 & array2\n");
  scanf("%d",&n);
  printf("Enter the array1 elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter the elements of the array2\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  //marging or concatinate
  for(i=0;i<n;i++)
  {
    temp[k]=arr1[i];
    k++;
  }
  for(i=0;i<n;i++)
  {
    temp[k]=arr2[i];
    k++;
  }
  printf("The concatinate of two array is =\n");
  for(k=0;k<2*n;k++)
  {
    printf("%d\n",temp[k]);
  }
  //sorting
  printf("If you want to sort the concatinate array then press 1\n");
  scanf("%d",&m);
  for(k=0;k<2*n;k++)
  {
    for(s=k+1;s<2*n;s++)
    {
      if(temp[k]>temp[s])
      {
        temp2=temp[k];
        temp[k]=temp[s];
        temp[s]=temp2;
      }
    }
  }
  printf("After sorting the array will be=\n");
  for(k=0;k<2*n;k++)
  {
    printf("%d\n",temp[k]);
  }
}
