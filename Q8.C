#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
float D,d,r1,r2;
clrscr();
printf("Enter the coefficient of x^2:\t");
scanf("%d",a);
printf("Enter the coefficient of x^1:\t");
scanf("%d",b);
printf("Enter the coefficient of x^0:\t");
scanf("%d",c);
D=(b*b)-(4*a*c);
if(D<0){
printf("Roots of the quadratic equation are not real");
//exit(0);
}
else{
d=sqrt(D);
r1=(-1*b+d)/(2*a);
r2=(-1*b-d)/(2*a);
printf("The roots of the quadratic equation are:\n");
printf("\t%fn\t%f",r1,r2);
}
getch();
}