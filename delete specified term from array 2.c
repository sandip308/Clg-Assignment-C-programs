#include<stdio.h>
void main()
{
  int i,n,a[100],temp[100],position,del,flag=0;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the term which you want to delete\n");
  scanf("%d",&del);
  for (i = 0;i<n; i++) 
   {
    if(a[i]==del)
    {
    	flag=1;
      position=i;
    }
  }
  if(flag==1)
  {
  	for(i=0;i<n-1;i++)
  	{
  		if(i<position)
  		{
  			temp[i]=a[i];
		  }
		  if(i>=position)
		  {
		  	temp[i]=a[i+1];
		  }
	  }

 printf("After deleting array elements are=\n");
  for(i=0;i<n-1;i++)
  {
    printf("%d\n",temp[i]);
  }
}
else
printf("The term is not found\n");
}
