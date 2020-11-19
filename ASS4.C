#include<stdio.h>
#include<conio.h>
void main(){
char s[25],*p,*q;
int i,len=0;
clrscr();
printf("Enter any string:\t");
gets(s);
p=s;
while(*p!='\0'){
len++;
p++;
}
p=s;
q=p+(len-1);
for(i=0;i<len/2;i++){
if(*p!=*q){
printf("Not palindrome");
break;
}}
if(i==len/2)
printf("Palindrome");
getch();}