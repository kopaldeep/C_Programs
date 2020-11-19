#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp,*fp1;
	char str[10],*ch,sfname[25],dfname[25],c;
	int i=0;
	clrscr();
	printf("Enter the name of source file:\t");
	gets(sfname);
	if((fp=fopen(sfname,"r"))!=NULL)
	{
		printf("Enter the name of destination file:\t");
		gets(dfname);
		if((fp1=fopen(dfname,"w"))!=NULL)
		{
			while((c=getc(fp))!=EOF){
			str[i]=c;
			i++; }
			printf("%s",str);
			ch=str;
			while((--i)>=0)
			{
				fprintf(fp1,"%c",*(ch+i));
			}
			fclose(fp);
			fclose(fp1);
		}
		else
		printf("Destination File Access Error!!");
	}
else
printf("Source File Access Error!!");
getch();}

