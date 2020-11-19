#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char s[20],w[5],*p=NULL;
int pos=-1,len=0,i=0;
clrscr();
printf("Enter any sentence:\t");
gets(s);
fflush(0);
printf("Enter substring:.......:\t");
gets(w);
//s=malloc(sizeof(char)*20);
//...................................................//

while(s[i]!=NULL)
{
p=strstr(s,w);
pos=strlen(s)-strlen(p);
i=pos;
strcpy(s,p);
}
if(pos!=-1)
printf("Last occ is.......:%s",p);
else
printf("Substring not found!!!");














/*p=s;
len=strlen(w);
p=strstr(s,w);
printf("Last occ is.......:%s",p);
while(*p!=NULL)
{
pos=strstr(p,w);
p=&s[pos+len];
}
if(pos!=-1)
printf("Last occ is.......:%s",p);
else
printf("Substring not found!!!");*/
getch();}