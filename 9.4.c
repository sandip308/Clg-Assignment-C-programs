#include<stdio.h>
#include<stdlib.h>
struct students
{
  char name[20];
  int roll, totalmarks;
}s1[50];
void main() {
  int n,i;
  char ch;
  printf("Enter the number of the student\n");
  scanf("%d",&n);
  fflush(stdin);
  FILE *fp1;
  fp1=fopen("student.txt","w+");
  if (fp1==NULL) {
    printf("File not open\n");
    exit(0);
  }
  for(i=0;i<n;i++)
  {
    printf("Enter the student name\n");
    scanf("%s",s1[i].name);
    fflush(stdin);
    printf("Enter the roll no\n");
    scanf("%d",&s1[i].roll);
    fflush(stdin);
    printf("Enter the total marks\n");
    scanf("%d",&s1[i].totalmarks);
    fflush(stdin);
    if(s1[i].totalmarks>=75)
    {
      fprintf(fp1,"The name of the student is=%s\n",s1[i].name);
      fprintf(fp1,"The roll no of the student is=%d\n",s1[i].roll);
      fprintf(fp1,"The total marks of the student is=%d\n",s1[i].totalmarks);

    }
  }
  fseek(fp1,0,SEEK_SET);
  while((ch=fgetc(fp1))!=EOF)
  {
    printf("%c",ch);
  }
  fclose(fp1);

}
