/*Write and run a program in C that has the following functions :
-It has a function that read the specified number of integer values
into an array.
The maximum size of array may be assumed as 10.
-a function that finds the maximum value and index on which this
value is found in the array.
-a function that finds the minimum value in the array.
-a main( )function that uses all the functions and then prints
the array, maximum value and its index, and the minimum value.*/
#include<stdio.h>
#include<conio.h>
#define size 10
void readarray(int[],int);
void findmax(int*,int*,int[],int);
int findmin(int[],int);
void readarray(int arr[],int n)
{
	int i;
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		printf("Element[%d]:\t",i+1);
		scanf("%d",&arr[i]);
	}
}
void findmax(int *max,int *index,int arr[],int n)
{
	int i;
	*max=arr[0];
	*index=1;
	for(i=1;i<n;i++)
	{
		if(*max<arr[i])
		{
			*max=arr[i];
			*index=i+1;
		}
	}
}
int findmin(int arr[],int n)
{
	int i,min=arr[0];
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
return min;
}
void main()
{
int arr[size],n,max,min,index,i;
clrscr();
printf("Enter How many terms?\t");
scanf("%d",&n);
readarray(arr,n);
findmax(&max,&index,arr,n);
min=findmin(arr,n);
printf("The array list is:\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
printf("The maximum value in the list is %d at index %d.\n",max,index);
printf("The minimum value in the list is %d.",min);
getch();
}