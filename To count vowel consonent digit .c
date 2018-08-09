#include<stdio.h>
#include<string.h>
void main()
{
  int v=0,c=0,d=0,i;
  char str[100];
  printf("Enter a string\n");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
    {
      v++;
    }
    else if(str[i]>='0'&& str[i]<='9')
    {
      d++;
    }
  }
  printf("The number of the vowel in this string is=%d\n",v);
  printf("The digit avaliable in this string is=%d\n",d);
  printf("The consonent in this string is=%d\n",strlen(str)-v-d);
}
