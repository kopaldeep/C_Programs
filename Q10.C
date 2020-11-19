#include<stdio.h>
#include<conio.h>
float comp_int_calc(float int_amt,float rate,int years);
void main(){
float p,r;
int t;
clrscr();
printf("Enter the initial amount:\t");
scanf("%f",&p);
printf("Enter the interest rate\t");
scanf("%f",&r);
printf("Enter the years:\t");
scanf("%d",&t);
printf("The total interest amountis %0.2f",comp_int_calc(p,r,t));
getch();
}
float comp_int_calc(float int_amt,float rate,int years){
float temp=1,t;
t=1+rate/100;
while(years){
temp*=t;
years--;
}
return (int_amt*temp);
}