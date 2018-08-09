#include<stdio.h>
#include<string.h>
int main()
{
  int i,j=0;
  char str1[50],str2[50];
  printf("Enter a string\n");
  scanf("%s",&str1);
  for(i=strlen(str1)-1;i>=0;i--)
  {
    str2[j]=str1[i];
    j++;
  }
  str2[j]='\0';
  if(strcmp(str1,str2)==0)
  {
    printf("The string is pallindrome\n");
  }
  else
  {
    printf("The string is not pallindrome\n");
  }

}
