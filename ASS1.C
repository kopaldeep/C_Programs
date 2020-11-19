#include<stdio.h>
#include<conio.h>
void main(){
int i,j,s;
clrscr();
printf("Prefect number between 1 to 50 are:\n");
for(i=1;i<=50;i++){
j=1;
s=0;
while(j<i){
if(i%j==0)
s+=j;
j++ ;}
if(s==i)
printf("%d\n",i);
}
getch();}
