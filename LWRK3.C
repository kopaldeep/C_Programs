/*Write an interactive program in C to direct the even and odd
numbers to the respective filesnamely even.txt and odd.txt,
given a list of 10 numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
int list[10],i;
FILE *ev,*od;
clrscr();
printf("Enter the elements in the list:\n");
for(i=0;i<10;i++)
scanf("%d",&list[i]);
ev=fopen("even.txt","w");
od=fopen("odd.txt","w");
if(ev==NULL || od==NULL)
{
	printf("Error in creating file");
	exit(0);
}
else
{
	for(i=0;i<10;i++)
	{
		if(list[i]%2==0)
		{
			fprintf(ev,"%d\n",list[i]);
		}
		else
		{
			fprintf(od,"%d\n",list[i]);
		}
	}
	fclose(ev);
	fclose(od);
}
getch();
}