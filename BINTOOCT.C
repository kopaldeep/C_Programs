#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<alloc.h>
void main(){
int bin,*oct,t,r,i,j,len,s;
clrscr();
printf("Enter binary value:\t");
scanf("%d",&bin);
len=ceil(sizeof(bin));
printf("%d\n",len);
oct=(int*)malloc(sizeof(len));
s=len;
while(bin){
t=0;
i=1;
for(j=0;j<3;j++){
r=bin%10;
t=t+r*i;
i*=2;
bin=bin/10;
if(bin==0)
break;
}
oct[--s]=t;
}
printf("The octal number is:\t");
for(i=0;i<len;i++)
printf("%d",oct[i]);
printf("\n\n\n\n\n\n\n\n\n\n\n\n%d",'1'-'0');
getch();
}