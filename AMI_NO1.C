#include<stdio.h>
#include<conio.h>
void main()
{
long n1,n2,m=1,r,s1=0,s2=0,i;
clrscr();
for(i=1;i<=100000;i++)
{       n1=i;
	s1=0;
	while(m<n1)
	{
		r=n1%m;
		if(r==0)
		s1+=m;
		m++;
	}
	m=1;
	n2=s1;
	s2=0;
	while(m<n2)
	{
	r=n2%m;
	if(r==0)
	s2+=m;
	m++;
	}
	if(n1==s2 && n1!=n2)
	printf("\n%ld & %ld are amicable numbers.",n1,n2);
}
getch();
}