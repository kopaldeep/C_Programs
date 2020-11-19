#include<stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
FILE *fp;
char fname[20],ch;
int count=0;
clrscr();
printf("Enter the name of the file:\t");
gets(fname);
fp=fopen(fname,"w");
if(fp==NULL)
printf("An error occurred!!!");
else{
printf("Enter text to the file:\n");
do
putc((ch=getchar()),fp);
while(ch!='\n');
fclose(fp);
fp=fopen(fname,"r");
while((ch=getc(fp))!=EOF)
count++;
fclose(fp);
printf("File contains %d characters.",count);
}
getch();
}