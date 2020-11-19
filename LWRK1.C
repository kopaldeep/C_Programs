/*Write a program in C to concatenate two character strings and
find the length of the resultant
string using Pointers. You are not allowed to use the string
handling functions like strcat( )
and strlen( ) in C.*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define max 10
void main()
{
char *ptr1,*ptr2,*ptr3;
int i=0,j=0;
clrscr();
ptr1=(char *)malloc(max*(sizeof(char)));
ptr2=(char *)malloc(max*(sizeof(char)));
printf("Enter first string:\t");
gets(ptr1);
printf("Enter second string:\t");
gets(ptr2);
ptr3=(char *)malloc((2*max)*(sizeof(char)));
while((*(ptr1+i))!='\0')
{
*(ptr3+i)=*(ptr1+i);
i++;
}
while((*(ptr2+j))!='\0')
{
*(ptr3+i)=*(ptr2+j);
i++;
j++;
}
*(ptr3+i)='\0';
i=0;
while(*(ptr3+i)!='\0')
i++;
printf("\nConcatenated string is:\t%s",ptr3);
printf("\nIts length is:\t%d",i);
getch();
}