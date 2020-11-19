/*june 9*/
#include<stdio.h>
#include<conio.h>
void pattern(int n)
{
int i,j,k;
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
printf(" ");
k=0;
for(j=1;j<=i;j++)
printf("%d",++k);
for(j=1;j<i;j++)
printf("%d",--k);
printf("\n");
}
for(i=1;i<n;i++)
{
for(j=1;j<=i;j++)
printf(" ");
k=0;
for(j=1;j<=(n-i);j++)
printf("%d",++k);
for(j=1;j<(n-i);j++)
printf("%d",--k);
printf("\n");
}
}
void main()
{
int n;
clrscr();
printf("Enter the number of rows:\t");
scanf("%d",&n);
pattern(n);
getch();}