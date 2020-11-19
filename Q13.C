#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int num,s=-999,l=-999;
char ch='y';
clrscr();
do{
printf("Enter any number:\t");
scanf("%d",&num);
if(s==-999 && l==-999)
{s=num;l=num;}
if(num<s)
s=num;
if(num>l)
l=num;
printf("Do You want yo continue<y/n>?\t");
scanf("\n%c",&ch);
ch=tolower(ch);
}while(ch=='y');
printf("%d is smallest among the set of numbers",s);
printf("\n%d is largest among the set of numbers",l );
getch();
}