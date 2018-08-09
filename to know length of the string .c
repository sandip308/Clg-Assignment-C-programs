#include<stdio.h>
int main()
{
  int i,j,length=0;
  char str[50];
  printf("Enter a string\n");
  scanf("%s",&str);
  for(i=0;str[i]!='\0';i++)
  {
    length++;
  }
  printf("The length of the string is=%d",length);
  }
