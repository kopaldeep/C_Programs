#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int v=0,c=0,s=0,i=0;
char str[20],ch;
clrscr();
printf("Enter any string:\n");
gets(str);
while(str[i]!='\0'){
if(str[i]==' ')
s++;
if(isalpha(str[i]))
{
ch=tolower(str[i]);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
v++;
else
c++;
}
i++;
}
printf("The total number of vowels in the string is: %d",v);
printf("\nThe total number of consonants in the string is: %d",c);
printf("\nThe total number of spaces in the string is: %d",s);
getch();
}