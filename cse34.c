#include <stdio.h>
#include <string.h>
void search(char ch[20]);
void issue(char sp[20]);
void sub();
struct student {
  char name[20], dept[20];
  int rollno, bookissued;
  char doi[20], dos[20];
} s2[20];

struct book {
  char title[20];
  int issueno;
  char issuestatus;
  char doib[20], dosb[20];
} b2[20];

int j, n, m, d;
char sb[20], ib[20];
void main() {
  printf("enter the number of student\n");
  scanf("%d", &n);
  fflush(stdin);
  for (j = 0; j < n; j++) {
    printf("Enter the student name\n");
    gets(s2[j].name);
    printf("Enter the dept of student\n");
    gets(s2[j].dept);
    printf("enter the roll no\n ");
    scanf("%d", &s2[j].rollno);
    fflush(stdin);
    // s2[j].doi[20]=" ";
    // s2[j].dos[20]=" ";
    s2[j].bookissued = 0;
  }
  printf("Enter the number of the book\n");
  scanf("%d", &m);
  fflush(stdin);
  for (j = 0; j < m; j++) {
    printf("Enter the title of the book\n");
    gets(b2[j].title);
    printf("enter the issn no\n");
    scanf("%d", &b2[j].issueno);
    fflush(stdin);
    // b2[j].doib[20]=" ";
    // b2[j].dosb[20]=" ";
  }
  while (1) {

    printf("Enter 1 to search\n");
    printf("Enter 2 to issue\n");
    printf("Enter 3 to return\n");
    printf("Enter 4 to exit\n");
    printf("Please enter your choice\n");
    scanf("%d", &d);
    fflush(stdin);

    switch (d) {
    case 1: {
      printf("Enter the title of the book which you want to search\n");
      fflush(stdin);
      gets(sb);
      fflush(stdin);
      search(sb);
      break;
    }

    case 2: {
      printf("Enter the book title whether book is issued or not\n");
      fflush(stdin);
      gets(ib);
      fflush(stdin);
      issue(ib);
      break;
    }
    case 3: {
      sub();
      break;
    }
    case 4: {
      exit(1);
      break;
    }
    default:
      printf("You entered wroung key\n");
    }
  }
}

void search(char ch[20]) {
  for (j = 0; j < m; j++) {
    if (strcmp(ch, b2[j].title) == 0) {
      printf("Book is Found\n");
      printf("The issnno of this book is=%d\n", b2[j].issueno);
      break;
    }
  }
  if (j == m) {
    printf("Book is not found\n");
  }
}
void issue(char sp[20]) {
  int s, flag = 0;
  for (j = 0; j < m; j++) {
    if (strcmp(sp, b2[j].title) == 0) {
      flag = 1;
      printf("The book is avaible for issue\n");
      printf("If you want to issue the book please enter roll no\n");
      scanf("%d", &s);
      if (s == s2[j].rollno) {
        b2[j].issuestatus = 'Y';
        printf("The book has been issued\n");
        printf("The issue status is=%c\n", b2[j].issuestatus);

        printf("The issn no of the book is=%d\n", b2[j].issueno);
      }
    }
    break;
  }
  if (j == m) {
    printf("Book is already issued to a student\n");
  }
}
void sub() {
  int c, roll;
  printf("Enter the roll no...");
  scanf("%d", &roll);
  fflush(stdin);
  for (j = 0; j < m; j++) {
    if (roll == s2[j].rollno) {
      /*if (s2[j].bookissued == 0)
	   {
        printf("You have not issued a book\n");
        break;
       }*/
      printf("You have issued a book\n");
      printf("If you want to return the previous book then press 5\n");
      scanf("%d", &c);

      if (c == 5) {
        printf("Your book is succesfully returned\n");
        b2[j].issuestatus = 'N';
        printf("The issue status of this book is=%c\n", b2[j].issuestatus);
      }
    }
  }
}
