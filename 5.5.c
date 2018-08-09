#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20][20],sp[20];
	int i,n,j;
	printf("Enter the number of names\n");
	scanf("%d",&n);
	printf("Enter the names\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&ch[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (strcmp(ch[i],ch[j])>0)
			{
				strcpy(sp,ch[i]);
				strcpy(ch[i],ch[j]);
				strcpy(ch[j],sp);
			}
		}
	}
	printf("The array name in alpahabatical order is=\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",ch[i]);
	}
}
