#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,j,t,l=0,h=0,mid=0,ser,pos=0;
	clrscr();
	printf("The limit of the array is ten elements.\n");
	printf("Enter the elements.\n");
	for(i=0;i<10;i++)
	{
		printf("Element %d:\t",i+1);
		scanf("%d",&arr[i]);
	}
	//sorting
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(arr[i]<arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("\n\nThe sorted list is:\n");
	for(i=0;i<10;i++)
	printf("%d\t",arr[i]);
	printf("Enter a value to be searched:\t");
	scanf("%d",&ser);
	// binary search
	l=0;h=9;
	while(l<=h && pos==0)
	{
		mid=(l+h)/2;
		if(ser==arr[mid])
		{
			pos=mid+1;
			break;
		}
		else if(ser<arr[mid])
		{
			h=mid-1;
		}
		else if(ser>arr[mid])
		{
			l=mid+1;
		}
	}
	if(pos!=0)
	{
		printf("\n\n%d is found at position %d",ser,pos);
	}
	else
	{
	printf("\n\n %d is not found in the list",ser);
	}
	getch();
	}