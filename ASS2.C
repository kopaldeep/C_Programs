#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char bin[25];
int len,oct=0,i=0,code=0;
clrscr();
printf("Enter a binary number:\t");
gets(bin);
len=strlen(bin);
if(len%3==1){
if(bin[0]=='0'){
oct=0;
i++;}
else if(bin[0]=='1'){
oct=1;
i++;
}
}
else if(len%3==2){
if(bin[0]=='0' && bin[i++]=='0'){
oct=0;
i=2;}
if(bin[0]=='0' && bin[i++]=='1'){
oct=1;
i=2;}
if(bin[0]=='1' && bin[i++]=='0'){
oct=2;
i=2;}
if(bin[0]=='1' && bin[i++]=='1'){
oct=3;
//i=2;
}
}
//printf("\n%d\n",i);
while(bin[i]!='\0'){
code=(bin[i++]*100)+(bin[i++]*10)+bin[i++];
printf("%d",code);
switch(code){
case 0:
oct=oct*10+0;
break;
case 1:
oct=oct*10+1;
break;
case 10:
oct=oct*10+2;
break;
case 11:
oct=oct*10+3;
break;
case 100:
oct=oct*10+4;
break;
case 101:
oct=oct*10+5;
break;
case 110:
oct=oct*10+6;
break;
case 111:
oct=oct*10+7;
break;
}
}
printf("%d",oct);
getch();
}