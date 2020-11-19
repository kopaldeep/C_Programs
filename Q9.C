#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 8
invert(int x,int p,int n)
{
int bin[size],r,i=0;
for(r=0;r<size;r++)
bin[r]=0;
i=size;
while(x)
{
r=x%2;
bin[--i]=r;
x=x/2;
}
p=size-p-1;
for(i=0;i<n;i++){
if(bin[p]==0)
bin[p++]=1;
else
bin[p++]=0;
}
x=0;
for(i=0;i<size;i++)
x+=(int)bin[i]*pow(2,(size-i-1));
return x;
}
void main()
{
int x,p,n,res,i;
clrscr();
printf("Enter any number:\t");
scanf("%d",&x);
printf("Enter position of bit to start interchange:\t");
scanf("%d",&p);
printf("Enter number of bits to be interchanged:\t");
scanf("%d",&n);
res=invert(x,p,n);
printf("New value is:\t");
printf("%d",res);
getch();
}