#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char bin[25];
	int bin1[25],oct[8],i=0,size,size1,j=0,k,sum,z;
	clrscr();
	printf("Enter any binary digit:\t");
	gets(bin);
	while(bin[i]!='\0')
	{
		bin1[i]=bin[i]-'0';
		i++;
	}
	size=i;
	size1=ceil(size/3.0);
	k=size1;
	for(i=size;i>0;)
	{
		sum=0;
		z=1;
		for(j=0;j<3;j++)
		{
			sum=sum+bin1[--i]*z;
			z=z*2;
			if(i==0)
			break;
		}
		oct[--k]=sum;
	}
	for(i=0;i<size;i++)
		printf("%d",bin1[i]);
	printf(" is equivalent to ");
	for(i=0;i<size1;i++)
		printf("%d",oct[i]);
	getch();
}