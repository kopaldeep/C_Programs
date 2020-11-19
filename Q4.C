#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=1;
clrscr();
printf("Enter any number:\t");
scanf("%d",&num);
printf("The divisors of %d are:\n",num);
while(i<num)
{
if(num%i==0)
printf("%d\n",i);
i++;
}
getch();}