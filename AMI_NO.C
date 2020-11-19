#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,m=1,r,s1=0,s2=0;
clrscr();
printf("Enter number1\t");
scanf("%d",&n1);
printf("Enter number2\t");
scanf("%d",&n2);
while(m<n1)
{
r=n1%m;
if(r==0)
s1+=m;
m++;
}
m=1;
while(m<n2)
{
r=n2%m;
if(r==0)
s2+=m;
m++;
}
if(n1==s2 && n2==s1)
printf("%d & %d are amicable numbers.",n1,n2);
else
printf("%d & %d are not amicable numbers.",n1,n2);
getch();
}