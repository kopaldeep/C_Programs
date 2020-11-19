#include<stdio.h>
#include<conio.h>
void main()
{
//int inc;
float tax,inc;
char ch='y';
clrscr();
do{
printf("Enter annual income:\t");
scanf("%f",&inc);
	if(inc<=5000)
		tax=0;
	else
	{
		if(inc<=15000)
		{
			inc=inc-5000;
			tax=inc*0.1;
		}
		else
		{
			if(inc<=35000)
			{
			       inc=inc-15000;
			       tax=1000+inc*0.15;
			}
			else
			{
			       inc=inc-35000;
			       tax=1000+3000+inc*0.2;
			}
		}
	}
printf("Total tax payable is:%f",tax);
printf("Do you want to continue<y/n>?");
scanf("\n%c",&ch);
}
while(ch=='y');
getch();
}