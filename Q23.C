#include<stdio.h>
#include<conio.h>
void main()
{
int i=0;
char str[20],*ch;
clrscr();
printf("Enter any string:\n");
gets(str);
ch=str;
while(*(ch+i)!='\0')
i++;
printf("Reversed string is:\n");
while(i>=0)
{
printf("%c",*(ch+i));
i--;
}
getch();
}