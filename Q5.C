#include<stdio.h>
#include<conio.h>
void main()
{
int num=0,n,q=0,r;
clrscr();
//printf("Enter any number:\t");
//scanf("%d",&num);
while(num<1000){
n=num;
q=0;
while(n)
{
r=n%10;
q=q+(r*r*r);
n=n/10;
}
if(q==num)
printf("%d\n",q);
num++;}

//else
//printf("Not an Armstrong Number");}
getch();
}