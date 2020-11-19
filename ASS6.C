#include<stdio.h>
#include<conio.h>
#define size 2
float calc_g_pay(float basic);
float calc_deduct(float basic);
void insert(void);
void display(void);
linkfloat(){
float a=0,*b;
b=&a;
a=*b;
}
struct emp_rec
{
int emp_no;
char emp_name[20];
int d_work;
float b_sal;
char desig;
float net_pay;
float g_pay;
float deduct;
}e[size];
void insert(void){
int i;
char n[20];
printf("Enter Employee details\n");
for(i=0;i<size;i++){
printf("Enter Employee Number:\t");
scanf("%d",&e[i].emp_no);
printf("Enter Employee Name:\t");
scanf("\n%s",&e[i].emp_name);
printf("Enter Days Worked:\t");
scanf("%d",&e[i].d_work);
printf("Enter Basic Salary:\t");
scanf("%f",&e[i].b_sal);
printf("Enter Employee Designation:\t");
scanf("\n%s",&e[i].desig);
e[i].g_pay=calc_g_pay(e[i].b_sal);
e[i].deduct=calc_deduct(e[i].b_sal);
} }
float calc_g_pay(float basic){
float hra,da,ta;
hra=0.25*basic;
da=0.3*basic;
ta=0.75*basic;
return(basic+hra+da+ta);
}
float calc_deduct(float basic){
return(0.55*basic);}
float calc(float g_pay,float deduct)
{
return(g_pay-deduct);
}
void display(void){
int i,j;
printf("\t\t\t\t-------------Pay Slip-------------\n\n\n\n");
for(i=0;i<size;i++){
printf("Employee No:\t%d\n",e[i].emp_no);
printf("Employee Name:\t%s\n",e[i].emp_name);
printf("Employee Designation:\t%s\n",e[i].desig);
printf("Number of Days Worked:\t%d\n",e[i].d_work);
printf("Basic Salary:\t%f\n",e[i].b_sal);
printf("Gross pay:\t%f\n",e[i].g_pay);
printf("Total Deductions:\t%f\n",e[i].deduct);
printf("Net pay after Deductions:\t%f\n",calc(e[i].g_pay,e[i].deduct));
for(j=0;j<40;j++)
printf("=");
printf("\n");
}}
void main()
{
char ch;
int c;
clrscr();
do
{
printf("\t\t\t\t======TOP MENU=======\n");
printf("1.Insert Record\n");
printf("2.Display\n");
printf("3.Exit\n");
printf("Enter your choice:\t");
scanf("%d",&c);
switch(c){
case 1:
insert();
break;
case 2:
display();
break;
case 3:
exit(0);
default:
continue;
}
printf("Do you want to continue<y/n>?");
scanf("\n%c",&ch);
}while(ch=='y');
getch();
}