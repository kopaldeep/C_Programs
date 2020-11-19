#include<stdio.h>
#include<conio.h>
#define size 5
void main(){
int arr[size],temp[size],i,j;
clrscr();
printf("Enter the elements of array:\n");
for(i=0;i<size;i++)
{
printf("Element %d:\t",i+1);
scanf("%d",&arr[i]);
}
for(i=0,
j=size;i<size;i++)
temp[i]=arr[--j];
printf("Reversed array is:\n");
for(i=0;i<size;i++)
printf("%d\n",temp[i]);
getch();
}