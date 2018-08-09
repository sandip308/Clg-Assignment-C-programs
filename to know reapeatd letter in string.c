#include<stdio.h>
#include<string.h>
int main()
{
  char ch,str[80];
  int i,count=0;
  printf("Enter a string\n");
  gets(str);
  printf("Enter a letter whose repeatence to be searched\n");
  scanf("%c",&ch);
  for(i=0;str[i]!='\0';i++)
  {
    if(ch==str[i])
    {
      count++;
    }
  }
  printf("The letter %c repeated %d times",ch,count);
}
