#include<stdio.h>
#include<conio.h>
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y
void main(){
int x,y;
clrscr();
printf("Enter any two values:\t");
scanf("%d%d",&x,&y);
printf("%d is maximum of the two numbers %d and %d",MAX(x,y),x,y);
printf("\n\n%d is minimum of the two numbers %d and %d",MIN(x,y),x,y);
getch();
}