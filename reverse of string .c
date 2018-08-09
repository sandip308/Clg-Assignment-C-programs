#include<stdio.h>
#include<string.h>
void main()
{
  int i,j=0;
  char str1[100],str2[100];
  printf("Enter a string\n");
  scanf("%s",&str1);
  for(i=strlen(str1)-1;i>=0;i--)
  {
    str2[j]=str1[i];
    j++;
  }
  str2[j]='\0';
  printf("The reverse of the array is=%s\n",str2);
}
