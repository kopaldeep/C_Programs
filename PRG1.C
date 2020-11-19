#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc,char *argv[])
{
int i,j,n;
char *str;
clrscr();
	if(argc==1)
	{
	printf("Usage: FileName Strings_List");
	exit(0);
	}
	else
	{
	printf("You Entered:\n");
	n=argc;
	for(i=1;i<n;i++)
	printf("%s\n",argv[i]);
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(strcmp(argv[i],argv[j])<0)
			{
				str=argv[i];
				argv[i]=argv[j];
				argv[j]=str;
			}
		}
	}
	printf("Sorted List of strings is:\n");
	for(i=1;i<n;i++)
	printf("%s\n",argv[i]);
	}
getch();
}