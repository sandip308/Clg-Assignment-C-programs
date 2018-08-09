#include<stdio.h>
#include<string.h>
void main()
{
  int i;
  char str[100],c;
  printf("Enter a string\n");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='A'&& str[i]<='Z')
    {
      c=str[i];
    }
  }
  printf("The first capital letter is=%c\n",c);
}
