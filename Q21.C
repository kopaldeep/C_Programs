#include<stdio.h>
#include<conio.h>
void main(){
char str[20];
int i=0;
clrscr();
printf("Enter any string:\n");
gets(str);
while(str[i]!='\0'){
if(str[i]>=97 && str[i]<=122)
str[i]=str[i]-32;
i++;
}
printf("Converted string is:\n%s",str);
getch();}