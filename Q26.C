#include<stdio.h>
#include<conio.h>
#include<math.h>
struct complex_no{
double x;
double y;
};
typedef struct complex_no c;
c calc(c z1,c z2){
c z3;
z3.x=(z1.x*z2.x)-(z1.y*z2.y);
z3.y=(z1.x*z2.y)+(z1.y*z2.x);
return z3;
}
void main(){
c z1,z2,z3;
clrscr();
printf("Enter real part of complex1:\t");
scanf("%lf",&z1.x);
printf("Enter imaginary part of complex1:\t");
scanf("%lf",&z1.y);
printf("Enter real part of complex2:\t");
scanf("%lf",&z2.x);
printf("Enter imaginary part of complex2:\t");
scanf("%lf",&z2.y);
z3=calc(z1,z2);
printf("The result is:\t");
if(z3.y>0)
printf("%lf + %lfi",z3.x,z3.y);
else
printf("%lf - %lfi",z3.x,fabs(z3.y));
getch();}