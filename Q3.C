#include<stdio.h>
#include<conio.h>
void main()
{
int num,ev=0,od=0,c_ev=0,c_od=0,tot;
float a_ev,a_od;
clrscr();
do
{
printf("Enter any integer:\t");
scanf("%d",&num);
if(num!=0)
{
if(num%2==0)
{
ev+=num;
c_ev++;
}
else
{
od+=num;
c_od++;
}
}
else
{
tot=c_od+c_ev;
a_ev=(float)ev/c_ev;
a_od=(float)od/c_od;
printf("The total number of even and odd integers is%d",tot);
printf("\nAverage value of even numbers %f",a_ev);
printf("\nAverage value of odd numbers %f",a_od);
}
}while(num!=0);
getch();
}