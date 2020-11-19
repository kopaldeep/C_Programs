#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[]){
clrscr();
if(argc!=2)
printf("Usage: FileName Your_Name\n");
else
printf("Hello %s !!",argv[1]);
getch();}