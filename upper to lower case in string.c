#include<stdio.h>
#include<string.h>
int main()
{
  int i;
  char str[50],arr[50];
  printf("Enter a sentence\n");
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]>='A'&& str[i]<='Z')
    {
      arr[i]=str[i]+32;
    }
    if(str[i]>='a'&& str[i]<='z')
    {
      arr[i]=str[i]-32;
    }
    else
    {
    arr[i]=str[i];
    }

  }
  printf("The upper case to lower case is=%s\n",arr);
}
