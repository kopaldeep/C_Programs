#include<stdio.h>
#include<conio.h>
strreplace(char *s,char chr, char repl_chr){
int i=0;
char *t=s;
while(*t!='\0'){
if(*t==chr){
*t=repl_chr;
i++;}
t++;}
return i;}
void main(){
char s[25],chr,repl_chr;
int occ=0;
clrscr();
printf("Enter any string:\t");
gets(s);
printf("Enter the character to be replaced:\t");
scanf("%c",&chr);
printf("Enter the replacing character:\t");
scanf("\n%c",&repl_chr);
occ=strreplace(s,chr,repl_chr);
printf("\nNew string is:\t%s\n",s);
printf("Total no. of replacements are:\t%d",occ);
getch();}