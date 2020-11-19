#include"header.h"
float comp_int_calc(float int_amt,int years){
float temp=1,t;
t=1+rate/100;
while(years){
temp*=t;
years--;
}
return (int_amt*temp);
}