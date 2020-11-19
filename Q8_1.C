#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b,c;
float d,d1,r1,r2;
clrscr();
printf("Enter x^2");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d<0)
printf("not real");
else{
d1=sqrt(d);
//printf("          %f",d1);
r1=((-1*b)+(d1))/(2*a);
r2=((-1*b)-(d1))/(2*a);
printf("%f,%f",r1,r2);}
getch();
}