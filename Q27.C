#include<stdio.h>
#include<conio.h>
#define size 25
calc_length(char *str){
int i=0;
while(*str!='\0'){
i++;
str++;
}
return i;
}
void main()
{
char str[size];
clrscr();
printf("Enter any string:\t");
gets(str);
printf("The length of entered string is:%d",calc_length(str));
getch();
}