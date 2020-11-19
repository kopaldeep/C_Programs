/*Write an interactive program in C to print the upper and
lower triangle of the matrix.*/
#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
int mat[max][max],i,j,n,ch;
clrscr();
printf("Enter the order of the square matrix:\t");
scanf("%d",&n);
printf("Enter the elements of the matrix\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&mat[i][j]);
clrscr();
printf("\t\t\tTOP MENU\n\n");
printf("1.Upper Matrix\n");
printf("2.Lower Matrix\n");
printf("Enter your choice:\t");
scanf("%d",&ch);
clrscr();
switch(ch)
{
	case 1:
	printf("Upper Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				printf("%d\t",mat[i][j]);
			}
			else
			{
			printf("\t");
			}
		}
		printf("\n");
	}
	break;
	case 2:
	printf("Lower Matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d\t",mat[i][j]);
			}
		}
		printf("\n");
	}
	break;
	default:
	printf("Wrong Entry");
}
getch();
}