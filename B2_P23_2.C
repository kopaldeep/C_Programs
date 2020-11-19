main(){
int num,sum;
for(num=2,sum=0;;){
sum=sum+num;
if(num>10)
break;
num=num+1;
}
printf("%d",sum);}