#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *f1,*f2;
	char fname[20],c,secfile[20];
	int count=0,i;
	clrscr();
	printf("Enter the file name:\t");
	gets(fname);
	f1=fopen(fname,"r");
	if(f1==NULL)
		printf("An error occured while opening a file!");
	else
	{
		i=0;
		while(fname[i]!='.'){
		secfile[i]=fname[i];
		i++;
		}
		strcat(secfile,".backup");
		printf("%s",secfile);
		f2=fopen(secfile,"w");
		if(f2==NULL)
			printf("Second file cannot be created!!!");
		else
		{
			while((c=getc(f1))!=EOF)
			{
				count++;
				putc(c,f2);
			}
			fclose(f1);
			fclose(f2);
			printf("%d characters!!!",count);
		}
	}
	getch();
}