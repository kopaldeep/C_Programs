#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si,ci,temp,x=1;
clrscr();
printf("Enter p r t\t");
scanf("%f%f%f",&p,&r,&t);
si=p*r*t/100;
temp=1+r/100;
while(t>0)
{
x=x*temp;
t--;
}
ci=p*x-p;
printf("si and ci %f    %f",si,ci);
getch();
}