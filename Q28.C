#include<stdio.h>
#include<conio.h>
#define maxsize 10
void minmax(int array[],int length,int *min,int *max)
{
int i;
*min=array[0];
*max=array[0];
for(i=1;i<length;i++)
{
if(array[i]<*min)
*min=array[i];
if(array[i]>*max)
*max=array[i];
}
}
void main()
{
int arr[maxsize],l,min=0,max=0,i;
clrscr();
printf("Enter the length of array:\t");
scanf("%d",&l);
printf("Enter the elements of array.\n");
for(i=0;i<l;i++)
{
printf("Element[%d]",i+1);
scanf("%d",&arr[i]);
}
minmax(arr,l,&min,&max);
printf("Minimum value within array is:\t%d\n",min);
printf("Maximum value within array is:\t%d\n",max);
getch();}