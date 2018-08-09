#include<stdio.h>
#include<string.h>
int main()
{
  int i,v=0,n;
  char arr[20];
  printf("Enter a sentence\n");
  gets (arr);
  for(i=0;arr[i]!='\0';i++)
  {
    if('A'==arr[i]||'a'==arr[i]||'E'==arr[i]||'e'==arr[i]||'I'==arr[i]||'i'==arr[i]||'O'==arr[i]||'o'==arr[i]||'U'==arr[i]||'u'==arr[i])
    v++;
  }
  printf("The number of a vowel in this sentence is=%d",v);
}
