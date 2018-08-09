#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,n;
  char str[100][100],arr[100];
  printf("Enter the number of names\n");
  scanf("%d",&n);
  printf("Enter the names which you wanted to sort\n");
  for(i=0;i<n;i++)
  {
    scanf("%s",&str[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(str[i], str[j])>0)
      {
        strcpy (arr,str[i]);
        strcpy (str[i],str[j]);
        strcpy (str[j],arr);
      }
    }
  }
  printf("The sorting of the alphabatical order is=\n");
  for(i=0;i<n;i++)
  {
    printf("%s\n",&str[i]);
  }
}
