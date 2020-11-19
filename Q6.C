#include<stdio.h>
#include<conio.h>
void main(){
int i,j=1,s=0;
clrscr();
printf("Enter any number:\t");
scanf("%d",&i);
while(j<i){
if(i%j==0)
s+=j;
j++ ;}
if(s==i)
printf("%d is a prefect number\n",i);
else
printf("%d is not a prefect number\n",i);
getch();}
