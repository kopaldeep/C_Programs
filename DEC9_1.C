#include<stdio.h>
#include<conio.h>
void main(){
int i=1,j=1;
for(;;){
if(i>5)
break;
else
j+=1;
printf("In %d", j);
i+=j;
}
}
