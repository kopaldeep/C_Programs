#include"header.h"
float comp_int_calc(float int_amt,int years);
void main()
{
float p;
int t;
clrscr();
printf("Enter the initial amount: ");
scanf("%f",&p);
printf("Enter the Number of years: ");
scanf("%f",&t);
printf("\nThe total interest amount is %0.2f",comp_int_calc(p,t));
getch();
}