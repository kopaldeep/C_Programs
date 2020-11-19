#include<stdio.h>
#include<conio.h>
void get(int n)
 { if (n<1) return;
 get(n-1);
 get(n-3);
 printf("%d\n", n); }
void main()
{
clrscr();
get(6);
getch();
}