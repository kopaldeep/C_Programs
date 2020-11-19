#include<stdio.h>
#include<conio.h>
void main(){
float w;
int ch;
clrscr();
l1:
printf("\n\n\t\t\tWEIGHT CONVERTER\n\n");
printf("1.Milligrams\n");
printf("2.Decigrams\n");
printf("3.Centigrams\n");
printf("4.Kilograms\n");
printf("5.Ounces\n");
printf("6.Pounds\n");
printf("7.Tons\n");
printf("8.Exit\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
if(ch<8){
printf("Enter weight:\n");
scanf("%f",&w);
}
switch(ch){
case 1:
w=w/1000;
break;
case 2:
w=w/10;
break;
case 3:
w=w/100;
break;
case 4:
w=w*1000;
break;
case 5:
w=w*28.3495;
break;
case 6:
w=w*453.592;
break;
case 7:
w=w*1000000;
break;
case 8:
exit(0);
break;
default:
printf("Wrong entry!!");
goto l1;
}
printf("It is equivalent to %f grams.",w);
goto l1;
}